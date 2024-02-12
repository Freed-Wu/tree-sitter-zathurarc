module.exports = grammar({
  name: "muttrc",

  extras: (_) => [/\s/, /\\\r?\n/],

  rules: {
    file: ($) => repeat(seq(optional($._code), $._end)),

    _code: ($) =>
      choice(
        $.alias_directive,
        $.alternates_directive,
        $.alternative_order_directive,
        $.attachments_directive,
        $.auto_view_directive,
        $.bind_directive,
        $.cd_directive,
        $.color_directive,
        $.echo_directive,
        $.exec_directive,
        $.finish_directive,
        $.group_directive,
        $.hdr_order_directive,
        $.ifdef_directive,
        $.ifndef_directive,
        $.ignore_directive,
        $.lists_directive,
        $.macro_directive,
        $.mailboxes_directive,
        $.named_mailboxes_directive,
        $.mailto_allow_directive,
        $.mime_lookup_directive,
        $.mono_directive,
        $.my_hdr_directive,
        $.nospam_directive,
        $.push_directive,
        $.reset_directive,
        $.score_directive,
        $.set_directive,
        $.setenv_directive,
        $.sidebar_pin_directive,
        $.sidebar_unpin_directive,
        $.source_directive,
        $.spam_directive,
        $.subjectrx_directive,
        $.subscribe_directive,
        $.toggle_directive,
        $.unalias_directive,
        $.unalternates_directive,
        $.unalternative_order_directive,
        $.unattachments_directive,
        $.unauto_view_directive,
        $.unbind_directive,
        $.uncolor_directive,
        $.ungroup_directive,
        $.unhdr_order_directive,
        $.unhook_directive,
        $.unignore_directive,
        $.unlists_directive,
        $.unmacro_directive,
        $.unmailboxes_directive,
        $.unmailto_allow_directive,
        $.unmime_lookup_directive,
        $.unmono_directive,
        $.unmy_hdr_directive,
        $.unscore_directive,
        $.unset_directive,
        $.unsetenv_directive,
        $.unsubjectrx_directive,
        $.unsubscribe_directive,
        $.account_hook_directive,
        $.charset_hook_directive,
        $.iconv_hook_directive,
        $.crypt_hook_directive,
        $.index_format_hook_directive,
        $.fcc_save_hook_directive,
        $.fcc_hook_directive,
        $.save_hook_directive,
        $.folder_hook_directive,
        $.mbox_hook_directive,
        $.message_hook_directive,
        $.open_hook_directive,
        $.close_hook_directive,
        $.append_hook_directive,
        $.reply_hook_directive,
        $.send_hook_directive,
        $.send2_hook_directive,
        $.timeout_hook_directive,
        $.startup_hook_directive,
        $.shutdown_hook_directive
      ),

    account_hook_directive: ($) =>
      command($, "account-hook", $._string, $._code),

    group_name: ($) => $._string,
    // TODO: support more `group_name`s
    _group: ($) => seq("-group", $.group_name),
    _addresses: ($) => commaSep1($.address),
    alias_directive: ($) =>
      command($, "alias", optional($._group), $.key, $._addresses),
    address: ($) => $._string,
    unalias_directive: ($) =>
      command($, "unalias", optional($._group), choice("*", $.key)),
    key: ($) =>
      repeat1(
        choice(
          seq("<", alias(/[a-zA-Z-]+/, $.key_name), ">"),
          /[^\n ]/,
          alias(/\\./, $.escape)
        )
      ),

    regex: ($) => $._string,
    _regexes: ($) => spaceSep1($.regex),
    alternates_directive: ($) =>
      command($, "alternates", optional($._group), $._regexes),
    unalternates_directive: ($) =>
      command($, "unalternates", optional($._group), choice("*", $._regexes)),
    alternative_order_directive: ($) =>
      command($, "alternative_order", $._mimes),
    unalternative_order_directive: ($) =>
      command($, "unalternative_order", choice("*", $._mimes)),
    mime_type: (_) => /[-.a-zA-Z\d]+/,
    mime: ($) =>
      seq($.mime_type, optional(seq("/", alias($.mime_type, $.sub_mime_type)))),
    _mime_types: ($) => spaceSep1($.mime_type),
    _mimes: ($) => spaceSep1($.mime),
    disposition: ($) => $._string,
    attachments_directive: ($) =>
      command(
        $,
        "attachments",
        choice(
          seq(optional(choice("+", "-")), $.disposition, $._mime_types),
          "?"
        )
      ),
    unattachments_directive: ($) =>
      command(
        $,
        "unattachments",
        choice(
          seq(optional(choice("+", "-")), $.disposition, $._mime_types),
          "*"
        )
      ),
    auto_view_directive: ($) => command($, "auto_view", $._mimes),
    unauto_view_directive: ($) =>
      command($, "unauto_view", choice("*", $._mimes)),

    map: (_) =>
      choice(
        "alias",
        "attach",
        "browser",
        "compose",
        "editor",
        "generic",
        "index",
        "mix",
        "pager",
        "pgp",
        "postpone",
        "query",
        "smime"
      ),
    _maps: ($) => commaSep1($.map),
    function: (_) => /[a-z-]+/,
    bind_directive: ($) => command($, "bind", $._maps, $.key, $.function),
    unbind_directive: ($) => command($, "unbind", choice("*", $._maps), $.key),

    cd_directive: ($) => command($, "cd", $._string),
    color_directive: ($) => command($, "color", $._string),
    echo_directive: ($) => command($, "echo", $._string),
    exec_directive: ($) => command($, "exec", $._string),
    finish_directive: ($) => command($, "finish", $._string),
    group_directive: ($) => command($, "group", $._string),
    hdr_order_directive: ($) => command($, "hdr_order", $._string),
    ifdef_directive: ($) => command($, "ifdef", $._string),
    ifndef_directive: ($) => command($, "ifndef", $._string),
    ignore_directive: ($) => command($, "ignore", $._string),
    lists_directive: ($) => command($, "lists", $._string),

    sequence: ($) => $._string,
    macro_directive: ($) => command($, "macro", $._maps, $.key, $.sequence),
    unmacro_directive: ($) =>
      command($, "unmacro", choice("*", $._maps), $.key),

    mailbox: ($) => $._string,
    _mailboxes: ($) => spaceSep1($.mailbox),
    description: ($) => $._string,
    mailboxes_directive: ($) => command($, "mailboxes", $._mailboxes),
    named_mailboxes_directive: ($) =>
      command($, "named-mailboxes", spaceSep1(seq($.description, $.mailbox))),
    unmailboxes_directive: ($) =>
      command($, "unmailboxes", choice("*", $._mailboxes)),
    mailto_allow_directive: ($) => command($, "mailto_allow", $._string),
    mime_lookup_directive: ($) => command($, "mime_lookup", $._string),
    mono_directive: ($) => command($, "mono", $._string),
    my_hdr_directive: ($) => command($, "my_hdr", $._string),
    nospam_directive: ($) => command($, "nospam", $._string),
    push_directive: ($) => command($, "push", $._string),
    score_directive: ($) => command($, "score", $._string),
    sidebar_pin_directive: ($) => command($, "sidebar_pin", $._string),
    sidebar_unpin_directive: ($) => command($, "sidebar_unpin", $._string),
    spam_directive: ($) => command($, "spam", $._string),
    subjectrx_directive: ($) => command($, "subjectrx", $._string),
    subscribe_directive: ($) => command($, "subscribe", $._string),
    uncolor_directive: ($) => command($, "uncolor", $._string),
    ungroup_directive: ($) => command($, "ungroup", $._string),
    unhdr_order_directive: ($) => command($, "unhdr_order", $._string),
    unhook_directive: ($) => command($, "unhook", $._string),
    unignore_directive: ($) => command($, "unignore", $._string),
    unlists_directive: ($) => command($, "unlists", $._string),
    unmailto_allow_directive: ($) => command($, "unmailto_allow", $._string),
    unmime_lookup_directive: ($) => command($, "unmime_lookup", $._string),
    unmono_directive: ($) => command($, "unmono", $._string),
    unmy_hdr_directive: ($) => command($, "unmy_hdr", $._string),
    unscore_directive: ($) => command($, "unscore", $._string),
    unsubjectrx_directive: ($) => command($, "unsubjectrx", $._string),
    unsubscribe_directive: ($) => command($, "unsubscribe", $._string),

    charset_hook_directive: ($) => command($, "charset-hook", $._string),
    iconv_hook_directive: ($) => command($, "iconv-hook", $._string),
    crypt_hook_directive: ($) => command($, "crypt-hook", $._string),
    index_format_hook_directive: ($) =>
      command($, "index-format-hook", $._string),
    fcc_save_hook_directive: ($) => command($, "fcc-save-hook", $._string),
    fcc_hook_directive: ($) => command($, "fcc-hook", $._string),
    save_hook_directive: ($) => command($, "save-hook", $._string),
    folder_hook_directive: ($) => command($, "folder-hook", $._string),
    mbox_hook_directive: ($) => command($, "mbox-hook", $._string),
    message_hook_directive: ($) => command($, "message-hook", $._string),

    regex: ($) => $._string,
    shell_command: ($) => $._string,
    open_hook_directive: ($) =>
      command($, "open-hook", $.regex, $.shell_command),
    close_hook_directive: ($) =>
      command($, "close-hook", $.regex, $.shell_command),
    append_hook_directive: ($) =>
      command($, "append-hook", $.regex, $.shell_command),

    reply_hook_directive: ($) => command($, "reply-hook", $._string),
    send_hook_directive: ($) => command($, "send-hook", $._string),
    send2_hook_directive: ($) => command($, "send2-hook", $._string),
    timeout_hook_directive: ($) => command($, "timeout-hook", $._string),
    startup_hook_directive: ($) => command($, "startup-hook", $._string),
    shutdown_hook_directive: ($) => command($, "shutdown-hook", $._string),

    set_directive: ($) =>
      command(
        $,
        "set",
        choice(
          seq(
            $.option,
            optional(" "),
            "=",
            optional(" "),
            choice($.int, $.float, $.quadoption, $._string)
          ),
          $._options2,
          seq($.option, "?")
        )
      ),
    _options2: ($) => spaceSep1(seq(optional(choice("&", "?")), $.option)),
    _options: ($) => spaceSep1($.option),
    unset_directive: ($) => command($, "unset", $._options),
    reset_directive: ($) => command($, "reset", $._options),
    toggle_directive: ($) => command($, "toggle", $._options),

    setenv_directive: ($) =>
      command(
        $,
        "setenv",
        choice(seq("?", $.option), seq($.option, alias(/\S+/, $.value)))
      ),
    unsetenv_directive: ($) => command($, "unsetenv", $.option),

    option: (_) => /[a-z_\d]+/,

    quadoption: (_) => choice("yes", "no", "ask-yes", "ask-no"),
    _int: (_) => /\d+/,
    int: ($) => $._int,
    float: ($) =>
      prec(2, choice(seq(optional($._int), ".", $._int), seq($._int, "."))),
    _string: ($) => choice($.string, "\n", $.back_quoted_string),
    // TODO: support environment variable
    back_quoted_string: (_) => quoted_string("`"),
    string: ($) => choice($._quoted_string, $._word),
    _quoted_string: (_) => choice(quoted_string("'"), quoted_string('"')),
    _word: (_) => /(\\\r?\n|[^"'`\s])(\S|\\\s)*/,

    source_directive: ($) => command($, "source", alias($._string, $.path)),

    comment: (_) => /#[^\n]*/,
    _eol: (_) => /\r?\n/,
    _space: (_) => prec(-1, repeat1(/[ \t]/)),
    _end: ($) => seq(optional($._space), optional($.comment), $._eol),
  },
});

function command($, cmd, ...args) {
  return seq(alias(cmd, $.command), ...args);
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ",");
}

function spaceSep1(rule) {
  return sep1(rule, " ");
}

function quoted_string(char) {
  return seq(
    char,
    field("content", new RegExp("([^" + char + "]|\\\\" + char + ")+")),
    char
  );
}
