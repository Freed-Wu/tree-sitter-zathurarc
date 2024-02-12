#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 391
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 252
#define ALIAS_COUNT 2
#define TOKEN_COUNT 129
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_account_DASHhook = 1,
  anon_sym_DASHgroup = 2,
  anon_sym_COMMA = 3,
  anon_sym_alias = 4,
  anon_sym_unalias = 5,
  anon_sym_STAR = 6,
  anon_sym_LT = 7,
  aux_sym_key_token1 = 8,
  anon_sym_GT = 9,
  aux_sym_key_token2 = 10,
  aux_sym_key_token3 = 11,
  anon_sym_ = 12,
  anon_sym_alternates = 13,
  anon_sym_unalternates = 14,
  anon_sym_alternative_order = 15,
  anon_sym_unalternative_order = 16,
  sym_mime_type = 17,
  anon_sym_SLASH = 18,
  anon_sym_attachments = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_QMARK = 22,
  anon_sym_unattachments = 23,
  anon_sym_auto_view = 24,
  anon_sym_unauto_view = 25,
  anon_sym_attach = 26,
  anon_sym_browser = 27,
  anon_sym_compose = 28,
  anon_sym_editor = 29,
  anon_sym_generic = 30,
  anon_sym_index = 31,
  anon_sym_mix = 32,
  anon_sym_pager = 33,
  anon_sym_pgp = 34,
  anon_sym_postpone = 35,
  anon_sym_query = 36,
  anon_sym_smime = 37,
  sym_function = 38,
  anon_sym_bind = 39,
  anon_sym_unbind = 40,
  anon_sym_cd = 41,
  anon_sym_color = 42,
  anon_sym_echo = 43,
  anon_sym_exec = 44,
  anon_sym_finish = 45,
  anon_sym_group = 46,
  anon_sym_hdr_order = 47,
  anon_sym_ifdef = 48,
  anon_sym_ifndef = 49,
  anon_sym_ignore = 50,
  anon_sym_lists = 51,
  anon_sym_macro = 52,
  anon_sym_unmacro = 53,
  anon_sym_mailboxes = 54,
  anon_sym_named_DASHmailboxes = 55,
  anon_sym_unmailboxes = 56,
  anon_sym_mailto_allow = 57,
  anon_sym_mime_lookup = 58,
  anon_sym_mono = 59,
  anon_sym_my_hdr = 60,
  anon_sym_nospam = 61,
  anon_sym_push = 62,
  anon_sym_score = 63,
  anon_sym_sidebar_pin = 64,
  anon_sym_sidebar_unpin = 65,
  anon_sym_spam = 66,
  anon_sym_subjectrx = 67,
  anon_sym_subscribe = 68,
  anon_sym_uncolor = 69,
  anon_sym_ungroup = 70,
  anon_sym_unhdr_order = 71,
  anon_sym_unhook = 72,
  anon_sym_unignore = 73,
  anon_sym_unlists = 74,
  anon_sym_unmailto_allow = 75,
  anon_sym_unmime_lookup = 76,
  anon_sym_unmono = 77,
  anon_sym_unmy_hdr = 78,
  anon_sym_unscore = 79,
  anon_sym_unsubjectrx = 80,
  anon_sym_unsubscribe = 81,
  anon_sym_charset_DASHhook = 82,
  anon_sym_iconv_DASHhook = 83,
  anon_sym_crypt_DASHhook = 84,
  anon_sym_index_DASHformat_DASHhook = 85,
  anon_sym_fcc_DASHsave_DASHhook = 86,
  anon_sym_fcc_DASHhook = 87,
  anon_sym_save_DASHhook = 88,
  anon_sym_folder_DASHhook = 89,
  anon_sym_mbox_DASHhook = 90,
  anon_sym_message_DASHhook = 91,
  anon_sym_open_DASHhook = 92,
  anon_sym_close_DASHhook = 93,
  anon_sym_append_DASHhook = 94,
  anon_sym_reply_DASHhook = 95,
  anon_sym_send_DASHhook = 96,
  anon_sym_send2_DASHhook = 97,
  anon_sym_timeout_DASHhook = 98,
  anon_sym_startup_DASHhook = 99,
  anon_sym_shutdown_DASHhook = 100,
  anon_sym_set = 101,
  anon_sym_EQ = 102,
  anon_sym_AMP = 103,
  anon_sym_unset = 104,
  anon_sym_reset = 105,
  anon_sym_toggle = 106,
  anon_sym_setenv = 107,
  aux_sym_setenv_directive_token1 = 108,
  anon_sym_unsetenv = 109,
  sym_option = 110,
  anon_sym_yes = 111,
  anon_sym_no = 112,
  anon_sym_ask_DASHyes = 113,
  anon_sym_ask_DASHno = 114,
  sym__int = 115,
  anon_sym_DOT = 116,
  anon_sym_LF = 117,
  anon_sym_BQUOTE = 118,
  aux_sym_back_quoted_string_token1 = 119,
  anon_sym_SQUOTE = 120,
  aux_sym__quoted_string_token1 = 121,
  anon_sym_DQUOTE = 122,
  aux_sym__quoted_string_token2 = 123,
  sym__word = 124,
  anon_sym_source = 125,
  sym_comment = 126,
  sym__eol = 127,
  aux_sym__space_token1 = 128,
  sym_file = 129,
  sym__code = 130,
  sym_account_hook_directive = 131,
  sym_group_name = 132,
  sym__group = 133,
  sym__addresses = 134,
  sym_alias_directive = 135,
  sym_address = 136,
  sym_unalias_directive = 137,
  sym_key = 138,
  sym_regex = 139,
  sym__regexes = 140,
  sym_alternates_directive = 141,
  sym_unalternates_directive = 142,
  sym_alternative_order_directive = 143,
  sym_unalternative_order_directive = 144,
  sym_mime = 145,
  sym__mime_types = 146,
  sym__mimes = 147,
  sym_disposition = 148,
  sym_attachments_directive = 149,
  sym_unattachments_directive = 150,
  sym_auto_view_directive = 151,
  sym_unauto_view_directive = 152,
  sym_map = 153,
  sym__maps = 154,
  sym_bind_directive = 155,
  sym_unbind_directive = 156,
  sym_cd_directive = 157,
  sym_color_directive = 158,
  sym_echo_directive = 159,
  sym_exec_directive = 160,
  sym_finish_directive = 161,
  sym_group_directive = 162,
  sym_hdr_order_directive = 163,
  sym_ifdef_directive = 164,
  sym_ifndef_directive = 165,
  sym_ignore_directive = 166,
  sym_lists_directive = 167,
  sym_sequence = 168,
  sym_macro_directive = 169,
  sym_unmacro_directive = 170,
  sym_mailbox = 171,
  sym__mailboxes = 172,
  sym_description = 173,
  sym_mailboxes_directive = 174,
  sym_named_mailboxes_directive = 175,
  sym_unmailboxes_directive = 176,
  sym_mailto_allow_directive = 177,
  sym_mime_lookup_directive = 178,
  sym_mono_directive = 179,
  sym_my_hdr_directive = 180,
  sym_nospam_directive = 181,
  sym_push_directive = 182,
  sym_score_directive = 183,
  sym_sidebar_pin_directive = 184,
  sym_sidebar_unpin_directive = 185,
  sym_spam_directive = 186,
  sym_subjectrx_directive = 187,
  sym_subscribe_directive = 188,
  sym_uncolor_directive = 189,
  sym_ungroup_directive = 190,
  sym_unhdr_order_directive = 191,
  sym_unhook_directive = 192,
  sym_unignore_directive = 193,
  sym_unlists_directive = 194,
  sym_unmailto_allow_directive = 195,
  sym_unmime_lookup_directive = 196,
  sym_unmono_directive = 197,
  sym_unmy_hdr_directive = 198,
  sym_unscore_directive = 199,
  sym_unsubjectrx_directive = 200,
  sym_unsubscribe_directive = 201,
  sym_charset_hook_directive = 202,
  sym_iconv_hook_directive = 203,
  sym_crypt_hook_directive = 204,
  sym_index_format_hook_directive = 205,
  sym_fcc_save_hook_directive = 206,
  sym_fcc_hook_directive = 207,
  sym_save_hook_directive = 208,
  sym_folder_hook_directive = 209,
  sym_mbox_hook_directive = 210,
  sym_message_hook_directive = 211,
  sym_shell_command = 212,
  sym_open_hook_directive = 213,
  sym_close_hook_directive = 214,
  sym_append_hook_directive = 215,
  sym_reply_hook_directive = 216,
  sym_send_hook_directive = 217,
  sym_send2_hook_directive = 218,
  sym_timeout_hook_directive = 219,
  sym_startup_hook_directive = 220,
  sym_shutdown_hook_directive = 221,
  sym_set_directive = 222,
  sym__options2 = 223,
  sym__options = 224,
  sym_unset_directive = 225,
  sym_reset_directive = 226,
  sym_toggle_directive = 227,
  sym_setenv_directive = 228,
  sym_unsetenv_directive = 229,
  sym_quadoption = 230,
  sym_int = 231,
  sym_float = 232,
  sym__string = 233,
  sym_back_quoted_string = 234,
  sym_string = 235,
  sym__quoted_string = 236,
  sym_source_directive = 237,
  sym__space = 238,
  sym__end = 239,
  aux_sym_file_repeat1 = 240,
  aux_sym__addresses_repeat1 = 241,
  aux_sym_key_repeat1 = 242,
  aux_sym__regexes_repeat1 = 243,
  aux_sym__mime_types_repeat1 = 244,
  aux_sym__mimes_repeat1 = 245,
  aux_sym__maps_repeat1 = 246,
  aux_sym__mailboxes_repeat1 = 247,
  aux_sym_named_mailboxes_directive_repeat1 = 248,
  aux_sym__options2_repeat1 = 249,
  aux_sym__options_repeat1 = 250,
  aux_sym__space_repeat1 = 251,
  alias_sym_path = 252,
  alias_sym_sub_mime_type = 253,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_account_DASHhook] = "command",
  [anon_sym_DASHgroup] = "-group",
  [anon_sym_COMMA] = ",",
  [anon_sym_alias] = "alias",
  [anon_sym_unalias] = "command",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [aux_sym_key_token1] = "key_name",
  [anon_sym_GT] = ">",
  [aux_sym_key_token2] = "key_token2",
  [aux_sym_key_token3] = "escape",
  [anon_sym_] = " ",
  [anon_sym_alternates] = "command",
  [anon_sym_unalternates] = "command",
  [anon_sym_alternative_order] = "command",
  [anon_sym_unalternative_order] = "command",
  [sym_mime_type] = "mime_type",
  [anon_sym_SLASH] = "/",
  [anon_sym_attachments] = "command",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [anon_sym_unattachments] = "command",
  [anon_sym_auto_view] = "command",
  [anon_sym_unauto_view] = "command",
  [anon_sym_attach] = "attach",
  [anon_sym_browser] = "browser",
  [anon_sym_compose] = "compose",
  [anon_sym_editor] = "editor",
  [anon_sym_generic] = "generic",
  [anon_sym_index] = "index",
  [anon_sym_mix] = "mix",
  [anon_sym_pager] = "pager",
  [anon_sym_pgp] = "pgp",
  [anon_sym_postpone] = "postpone",
  [anon_sym_query] = "query",
  [anon_sym_smime] = "smime",
  [sym_function] = "function",
  [anon_sym_bind] = "command",
  [anon_sym_unbind] = "command",
  [anon_sym_cd] = "command",
  [anon_sym_color] = "command",
  [anon_sym_echo] = "command",
  [anon_sym_exec] = "command",
  [anon_sym_finish] = "command",
  [anon_sym_group] = "command",
  [anon_sym_hdr_order] = "command",
  [anon_sym_ifdef] = "command",
  [anon_sym_ifndef] = "command",
  [anon_sym_ignore] = "command",
  [anon_sym_lists] = "command",
  [anon_sym_macro] = "command",
  [anon_sym_unmacro] = "command",
  [anon_sym_mailboxes] = "command",
  [anon_sym_named_DASHmailboxes] = "command",
  [anon_sym_unmailboxes] = "command",
  [anon_sym_mailto_allow] = "command",
  [anon_sym_mime_lookup] = "command",
  [anon_sym_mono] = "command",
  [anon_sym_my_hdr] = "command",
  [anon_sym_nospam] = "command",
  [anon_sym_push] = "command",
  [anon_sym_score] = "command",
  [anon_sym_sidebar_pin] = "command",
  [anon_sym_sidebar_unpin] = "command",
  [anon_sym_spam] = "command",
  [anon_sym_subjectrx] = "command",
  [anon_sym_subscribe] = "command",
  [anon_sym_uncolor] = "command",
  [anon_sym_ungroup] = "command",
  [anon_sym_unhdr_order] = "command",
  [anon_sym_unhook] = "command",
  [anon_sym_unignore] = "command",
  [anon_sym_unlists] = "command",
  [anon_sym_unmailto_allow] = "command",
  [anon_sym_unmime_lookup] = "command",
  [anon_sym_unmono] = "command",
  [anon_sym_unmy_hdr] = "command",
  [anon_sym_unscore] = "command",
  [anon_sym_unsubjectrx] = "command",
  [anon_sym_unsubscribe] = "command",
  [anon_sym_charset_DASHhook] = "command",
  [anon_sym_iconv_DASHhook] = "command",
  [anon_sym_crypt_DASHhook] = "command",
  [anon_sym_index_DASHformat_DASHhook] = "command",
  [anon_sym_fcc_DASHsave_DASHhook] = "command",
  [anon_sym_fcc_DASHhook] = "command",
  [anon_sym_save_DASHhook] = "command",
  [anon_sym_folder_DASHhook] = "command",
  [anon_sym_mbox_DASHhook] = "command",
  [anon_sym_message_DASHhook] = "command",
  [anon_sym_open_DASHhook] = "command",
  [anon_sym_close_DASHhook] = "command",
  [anon_sym_append_DASHhook] = "command",
  [anon_sym_reply_DASHhook] = "command",
  [anon_sym_send_DASHhook] = "command",
  [anon_sym_send2_DASHhook] = "command",
  [anon_sym_timeout_DASHhook] = "command",
  [anon_sym_startup_DASHhook] = "command",
  [anon_sym_shutdown_DASHhook] = "command",
  [anon_sym_set] = "command",
  [anon_sym_EQ] = "=",
  [anon_sym_AMP] = "&",
  [anon_sym_unset] = "command",
  [anon_sym_reset] = "command",
  [anon_sym_toggle] = "command",
  [anon_sym_setenv] = "command",
  [aux_sym_setenv_directive_token1] = "value",
  [anon_sym_unsetenv] = "command",
  [sym_option] = "option",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_ask_DASHyes] = "ask-yes",
  [anon_sym_ask_DASHno] = "ask-no",
  [sym__int] = "_int",
  [anon_sym_DOT] = ".",
  [anon_sym_LF] = "\n",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_back_quoted_string_token1] = "back_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token2] = "_quoted_string_token2",
  [sym__word] = "_word",
  [anon_sym_source] = "command",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym__code] = "_code",
  [sym_account_hook_directive] = "account_hook_directive",
  [sym_group_name] = "group_name",
  [sym__group] = "_group",
  [sym__addresses] = "_addresses",
  [sym_alias_directive] = "alias_directive",
  [sym_address] = "address",
  [sym_unalias_directive] = "unalias_directive",
  [sym_key] = "key",
  [sym_regex] = "regex",
  [sym__regexes] = "_regexes",
  [sym_alternates_directive] = "alternates_directive",
  [sym_unalternates_directive] = "unalternates_directive",
  [sym_alternative_order_directive] = "alternative_order_directive",
  [sym_unalternative_order_directive] = "unalternative_order_directive",
  [sym_mime] = "mime",
  [sym__mime_types] = "_mime_types",
  [sym__mimes] = "_mimes",
  [sym_disposition] = "disposition",
  [sym_attachments_directive] = "attachments_directive",
  [sym_unattachments_directive] = "unattachments_directive",
  [sym_auto_view_directive] = "auto_view_directive",
  [sym_unauto_view_directive] = "unauto_view_directive",
  [sym_map] = "map",
  [sym__maps] = "_maps",
  [sym_bind_directive] = "bind_directive",
  [sym_unbind_directive] = "unbind_directive",
  [sym_cd_directive] = "cd_directive",
  [sym_color_directive] = "color_directive",
  [sym_echo_directive] = "echo_directive",
  [sym_exec_directive] = "exec_directive",
  [sym_finish_directive] = "finish_directive",
  [sym_group_directive] = "group_directive",
  [sym_hdr_order_directive] = "hdr_order_directive",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_ifndef_directive] = "ifndef_directive",
  [sym_ignore_directive] = "ignore_directive",
  [sym_lists_directive] = "lists_directive",
  [sym_sequence] = "sequence",
  [sym_macro_directive] = "macro_directive",
  [sym_unmacro_directive] = "unmacro_directive",
  [sym_mailbox] = "mailbox",
  [sym__mailboxes] = "_mailboxes",
  [sym_description] = "description",
  [sym_mailboxes_directive] = "mailboxes_directive",
  [sym_named_mailboxes_directive] = "named_mailboxes_directive",
  [sym_unmailboxes_directive] = "unmailboxes_directive",
  [sym_mailto_allow_directive] = "mailto_allow_directive",
  [sym_mime_lookup_directive] = "mime_lookup_directive",
  [sym_mono_directive] = "mono_directive",
  [sym_my_hdr_directive] = "my_hdr_directive",
  [sym_nospam_directive] = "nospam_directive",
  [sym_push_directive] = "push_directive",
  [sym_score_directive] = "score_directive",
  [sym_sidebar_pin_directive] = "sidebar_pin_directive",
  [sym_sidebar_unpin_directive] = "sidebar_unpin_directive",
  [sym_spam_directive] = "spam_directive",
  [sym_subjectrx_directive] = "subjectrx_directive",
  [sym_subscribe_directive] = "subscribe_directive",
  [sym_uncolor_directive] = "uncolor_directive",
  [sym_ungroup_directive] = "ungroup_directive",
  [sym_unhdr_order_directive] = "unhdr_order_directive",
  [sym_unhook_directive] = "unhook_directive",
  [sym_unignore_directive] = "unignore_directive",
  [sym_unlists_directive] = "unlists_directive",
  [sym_unmailto_allow_directive] = "unmailto_allow_directive",
  [sym_unmime_lookup_directive] = "unmime_lookup_directive",
  [sym_unmono_directive] = "unmono_directive",
  [sym_unmy_hdr_directive] = "unmy_hdr_directive",
  [sym_unscore_directive] = "unscore_directive",
  [sym_unsubjectrx_directive] = "unsubjectrx_directive",
  [sym_unsubscribe_directive] = "unsubscribe_directive",
  [sym_charset_hook_directive] = "charset_hook_directive",
  [sym_iconv_hook_directive] = "iconv_hook_directive",
  [sym_crypt_hook_directive] = "crypt_hook_directive",
  [sym_index_format_hook_directive] = "index_format_hook_directive",
  [sym_fcc_save_hook_directive] = "fcc_save_hook_directive",
  [sym_fcc_hook_directive] = "fcc_hook_directive",
  [sym_save_hook_directive] = "save_hook_directive",
  [sym_folder_hook_directive] = "folder_hook_directive",
  [sym_mbox_hook_directive] = "mbox_hook_directive",
  [sym_message_hook_directive] = "message_hook_directive",
  [sym_shell_command] = "shell_command",
  [sym_open_hook_directive] = "open_hook_directive",
  [sym_close_hook_directive] = "close_hook_directive",
  [sym_append_hook_directive] = "append_hook_directive",
  [sym_reply_hook_directive] = "reply_hook_directive",
  [sym_send_hook_directive] = "send_hook_directive",
  [sym_send2_hook_directive] = "send2_hook_directive",
  [sym_timeout_hook_directive] = "timeout_hook_directive",
  [sym_startup_hook_directive] = "startup_hook_directive",
  [sym_shutdown_hook_directive] = "shutdown_hook_directive",
  [sym_set_directive] = "set_directive",
  [sym__options2] = "_options2",
  [sym__options] = "_options",
  [sym_unset_directive] = "unset_directive",
  [sym_reset_directive] = "reset_directive",
  [sym_toggle_directive] = "toggle_directive",
  [sym_setenv_directive] = "setenv_directive",
  [sym_unsetenv_directive] = "unsetenv_directive",
  [sym_quadoption] = "quadoption",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym__string] = "_string",
  [sym_back_quoted_string] = "back_quoted_string",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym_source_directive] = "source_directive",
  [sym__space] = "_space",
  [sym__end] = "_end",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__addresses_repeat1] = "_addresses_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym__regexes_repeat1] = "_regexes_repeat1",
  [aux_sym__mime_types_repeat1] = "_mime_types_repeat1",
  [aux_sym__mimes_repeat1] = "_mimes_repeat1",
  [aux_sym__maps_repeat1] = "_maps_repeat1",
  [aux_sym__mailboxes_repeat1] = "_mailboxes_repeat1",
  [aux_sym_named_mailboxes_directive_repeat1] = "named_mailboxes_directive_repeat1",
  [aux_sym__options2_repeat1] = "_options2_repeat1",
  [aux_sym__options_repeat1] = "_options_repeat1",
  [aux_sym__space_repeat1] = "_space_repeat1",
  [alias_sym_path] = "path",
  [alias_sym_sub_mime_type] = "sub_mime_type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_account_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_DASHgroup] = anon_sym_DASHgroup,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_unalias] = anon_sym_account_DASHhook,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_key_token2] = aux_sym_key_token2,
  [aux_sym_key_token3] = aux_sym_key_token3,
  [anon_sym_] = anon_sym_,
  [anon_sym_alternates] = anon_sym_account_DASHhook,
  [anon_sym_unalternates] = anon_sym_account_DASHhook,
  [anon_sym_alternative_order] = anon_sym_account_DASHhook,
  [anon_sym_unalternative_order] = anon_sym_account_DASHhook,
  [sym_mime_type] = sym_mime_type,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_attachments] = anon_sym_account_DASHhook,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_unattachments] = anon_sym_account_DASHhook,
  [anon_sym_auto_view] = anon_sym_account_DASHhook,
  [anon_sym_unauto_view] = anon_sym_account_DASHhook,
  [anon_sym_attach] = anon_sym_attach,
  [anon_sym_browser] = anon_sym_browser,
  [anon_sym_compose] = anon_sym_compose,
  [anon_sym_editor] = anon_sym_editor,
  [anon_sym_generic] = anon_sym_generic,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_mix] = anon_sym_mix,
  [anon_sym_pager] = anon_sym_pager,
  [anon_sym_pgp] = anon_sym_pgp,
  [anon_sym_postpone] = anon_sym_postpone,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_smime] = anon_sym_smime,
  [sym_function] = sym_function,
  [anon_sym_bind] = anon_sym_account_DASHhook,
  [anon_sym_unbind] = anon_sym_account_DASHhook,
  [anon_sym_cd] = anon_sym_account_DASHhook,
  [anon_sym_color] = anon_sym_account_DASHhook,
  [anon_sym_echo] = anon_sym_account_DASHhook,
  [anon_sym_exec] = anon_sym_account_DASHhook,
  [anon_sym_finish] = anon_sym_account_DASHhook,
  [anon_sym_group] = anon_sym_account_DASHhook,
  [anon_sym_hdr_order] = anon_sym_account_DASHhook,
  [anon_sym_ifdef] = anon_sym_account_DASHhook,
  [anon_sym_ifndef] = anon_sym_account_DASHhook,
  [anon_sym_ignore] = anon_sym_account_DASHhook,
  [anon_sym_lists] = anon_sym_account_DASHhook,
  [anon_sym_macro] = anon_sym_account_DASHhook,
  [anon_sym_unmacro] = anon_sym_account_DASHhook,
  [anon_sym_mailboxes] = anon_sym_account_DASHhook,
  [anon_sym_named_DASHmailboxes] = anon_sym_account_DASHhook,
  [anon_sym_unmailboxes] = anon_sym_account_DASHhook,
  [anon_sym_mailto_allow] = anon_sym_account_DASHhook,
  [anon_sym_mime_lookup] = anon_sym_account_DASHhook,
  [anon_sym_mono] = anon_sym_account_DASHhook,
  [anon_sym_my_hdr] = anon_sym_account_DASHhook,
  [anon_sym_nospam] = anon_sym_account_DASHhook,
  [anon_sym_push] = anon_sym_account_DASHhook,
  [anon_sym_score] = anon_sym_account_DASHhook,
  [anon_sym_sidebar_pin] = anon_sym_account_DASHhook,
  [anon_sym_sidebar_unpin] = anon_sym_account_DASHhook,
  [anon_sym_spam] = anon_sym_account_DASHhook,
  [anon_sym_subjectrx] = anon_sym_account_DASHhook,
  [anon_sym_subscribe] = anon_sym_account_DASHhook,
  [anon_sym_uncolor] = anon_sym_account_DASHhook,
  [anon_sym_ungroup] = anon_sym_account_DASHhook,
  [anon_sym_unhdr_order] = anon_sym_account_DASHhook,
  [anon_sym_unhook] = anon_sym_account_DASHhook,
  [anon_sym_unignore] = anon_sym_account_DASHhook,
  [anon_sym_unlists] = anon_sym_account_DASHhook,
  [anon_sym_unmailto_allow] = anon_sym_account_DASHhook,
  [anon_sym_unmime_lookup] = anon_sym_account_DASHhook,
  [anon_sym_unmono] = anon_sym_account_DASHhook,
  [anon_sym_unmy_hdr] = anon_sym_account_DASHhook,
  [anon_sym_unscore] = anon_sym_account_DASHhook,
  [anon_sym_unsubjectrx] = anon_sym_account_DASHhook,
  [anon_sym_unsubscribe] = anon_sym_account_DASHhook,
  [anon_sym_charset_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_iconv_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_crypt_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_index_DASHformat_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_fcc_DASHsave_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_fcc_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_save_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_folder_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_mbox_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_message_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_open_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_close_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_append_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_reply_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_send_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_send2_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_timeout_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_startup_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_shutdown_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_set] = anon_sym_account_DASHhook,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_unset] = anon_sym_account_DASHhook,
  [anon_sym_reset] = anon_sym_account_DASHhook,
  [anon_sym_toggle] = anon_sym_account_DASHhook,
  [anon_sym_setenv] = anon_sym_account_DASHhook,
  [aux_sym_setenv_directive_token1] = aux_sym_setenv_directive_token1,
  [anon_sym_unsetenv] = anon_sym_account_DASHhook,
  [sym_option] = sym_option,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_ask_DASHyes] = anon_sym_ask_DASHyes,
  [anon_sym_ask_DASHno] = anon_sym_ask_DASHno,
  [sym__int] = sym__int,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_back_quoted_string_token1] = aux_sym_back_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_string_token2] = aux_sym__quoted_string_token2,
  [sym__word] = sym__word,
  [anon_sym_source] = anon_sym_account_DASHhook,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym__code] = sym__code,
  [sym_account_hook_directive] = sym_account_hook_directive,
  [sym_group_name] = sym_group_name,
  [sym__group] = sym__group,
  [sym__addresses] = sym__addresses,
  [sym_alias_directive] = sym_alias_directive,
  [sym_address] = sym_address,
  [sym_unalias_directive] = sym_unalias_directive,
  [sym_key] = sym_key,
  [sym_regex] = sym_regex,
  [sym__regexes] = sym__regexes,
  [sym_alternates_directive] = sym_alternates_directive,
  [sym_unalternates_directive] = sym_unalternates_directive,
  [sym_alternative_order_directive] = sym_alternative_order_directive,
  [sym_unalternative_order_directive] = sym_unalternative_order_directive,
  [sym_mime] = sym_mime,
  [sym__mime_types] = sym__mime_types,
  [sym__mimes] = sym__mimes,
  [sym_disposition] = sym_disposition,
  [sym_attachments_directive] = sym_attachments_directive,
  [sym_unattachments_directive] = sym_unattachments_directive,
  [sym_auto_view_directive] = sym_auto_view_directive,
  [sym_unauto_view_directive] = sym_unauto_view_directive,
  [sym_map] = sym_map,
  [sym__maps] = sym__maps,
  [sym_bind_directive] = sym_bind_directive,
  [sym_unbind_directive] = sym_unbind_directive,
  [sym_cd_directive] = sym_cd_directive,
  [sym_color_directive] = sym_color_directive,
  [sym_echo_directive] = sym_echo_directive,
  [sym_exec_directive] = sym_exec_directive,
  [sym_finish_directive] = sym_finish_directive,
  [sym_group_directive] = sym_group_directive,
  [sym_hdr_order_directive] = sym_hdr_order_directive,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_ifndef_directive] = sym_ifndef_directive,
  [sym_ignore_directive] = sym_ignore_directive,
  [sym_lists_directive] = sym_lists_directive,
  [sym_sequence] = sym_sequence,
  [sym_macro_directive] = sym_macro_directive,
  [sym_unmacro_directive] = sym_unmacro_directive,
  [sym_mailbox] = sym_mailbox,
  [sym__mailboxes] = sym__mailboxes,
  [sym_description] = sym_description,
  [sym_mailboxes_directive] = sym_mailboxes_directive,
  [sym_named_mailboxes_directive] = sym_named_mailboxes_directive,
  [sym_unmailboxes_directive] = sym_unmailboxes_directive,
  [sym_mailto_allow_directive] = sym_mailto_allow_directive,
  [sym_mime_lookup_directive] = sym_mime_lookup_directive,
  [sym_mono_directive] = sym_mono_directive,
  [sym_my_hdr_directive] = sym_my_hdr_directive,
  [sym_nospam_directive] = sym_nospam_directive,
  [sym_push_directive] = sym_push_directive,
  [sym_score_directive] = sym_score_directive,
  [sym_sidebar_pin_directive] = sym_sidebar_pin_directive,
  [sym_sidebar_unpin_directive] = sym_sidebar_unpin_directive,
  [sym_spam_directive] = sym_spam_directive,
  [sym_subjectrx_directive] = sym_subjectrx_directive,
  [sym_subscribe_directive] = sym_subscribe_directive,
  [sym_uncolor_directive] = sym_uncolor_directive,
  [sym_ungroup_directive] = sym_ungroup_directive,
  [sym_unhdr_order_directive] = sym_unhdr_order_directive,
  [sym_unhook_directive] = sym_unhook_directive,
  [sym_unignore_directive] = sym_unignore_directive,
  [sym_unlists_directive] = sym_unlists_directive,
  [sym_unmailto_allow_directive] = sym_unmailto_allow_directive,
  [sym_unmime_lookup_directive] = sym_unmime_lookup_directive,
  [sym_unmono_directive] = sym_unmono_directive,
  [sym_unmy_hdr_directive] = sym_unmy_hdr_directive,
  [sym_unscore_directive] = sym_unscore_directive,
  [sym_unsubjectrx_directive] = sym_unsubjectrx_directive,
  [sym_unsubscribe_directive] = sym_unsubscribe_directive,
  [sym_charset_hook_directive] = sym_charset_hook_directive,
  [sym_iconv_hook_directive] = sym_iconv_hook_directive,
  [sym_crypt_hook_directive] = sym_crypt_hook_directive,
  [sym_index_format_hook_directive] = sym_index_format_hook_directive,
  [sym_fcc_save_hook_directive] = sym_fcc_save_hook_directive,
  [sym_fcc_hook_directive] = sym_fcc_hook_directive,
  [sym_save_hook_directive] = sym_save_hook_directive,
  [sym_folder_hook_directive] = sym_folder_hook_directive,
  [sym_mbox_hook_directive] = sym_mbox_hook_directive,
  [sym_message_hook_directive] = sym_message_hook_directive,
  [sym_shell_command] = sym_shell_command,
  [sym_open_hook_directive] = sym_open_hook_directive,
  [sym_close_hook_directive] = sym_close_hook_directive,
  [sym_append_hook_directive] = sym_append_hook_directive,
  [sym_reply_hook_directive] = sym_reply_hook_directive,
  [sym_send_hook_directive] = sym_send_hook_directive,
  [sym_send2_hook_directive] = sym_send2_hook_directive,
  [sym_timeout_hook_directive] = sym_timeout_hook_directive,
  [sym_startup_hook_directive] = sym_startup_hook_directive,
  [sym_shutdown_hook_directive] = sym_shutdown_hook_directive,
  [sym_set_directive] = sym_set_directive,
  [sym__options2] = sym__options2,
  [sym__options] = sym__options,
  [sym_unset_directive] = sym_unset_directive,
  [sym_reset_directive] = sym_reset_directive,
  [sym_toggle_directive] = sym_toggle_directive,
  [sym_setenv_directive] = sym_setenv_directive,
  [sym_unsetenv_directive] = sym_unsetenv_directive,
  [sym_quadoption] = sym_quadoption,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym__string] = sym__string,
  [sym_back_quoted_string] = sym_back_quoted_string,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_source_directive] = sym_source_directive,
  [sym__space] = sym__space,
  [sym__end] = sym__end,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__addresses_repeat1] = aux_sym__addresses_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym__regexes_repeat1] = aux_sym__regexes_repeat1,
  [aux_sym__mime_types_repeat1] = aux_sym__mime_types_repeat1,
  [aux_sym__mimes_repeat1] = aux_sym__mimes_repeat1,
  [aux_sym__maps_repeat1] = aux_sym__maps_repeat1,
  [aux_sym__mailboxes_repeat1] = aux_sym__mailboxes_repeat1,
  [aux_sym_named_mailboxes_directive_repeat1] = aux_sym_named_mailboxes_directive_repeat1,
  [aux_sym__options2_repeat1] = aux_sym__options2_repeat1,
  [aux_sym__options_repeat1] = aux_sym__options_repeat1,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
  [alias_sym_path] = alias_sym_path,
  [alias_sym_sub_mime_type] = alias_sym_sub_mime_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_account_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unalias] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alternates] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unalternates] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alternative_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unalternative_order] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unattachments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_view] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unauto_view] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_attach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_browser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_editor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pager] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postpone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smime] = {
    .visible = true,
    .named = false,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unbind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_finish] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hdr_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifdef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifndef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lists] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmacro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_named_DASHmailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailto_allow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mime_lookup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mono] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_my_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nospam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_score] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sidebar_pin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sidebar_unpin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_spam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subjectrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subscribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_uncolor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unhdr_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unlists] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmailto_allow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmime_lookup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmono] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmy_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unscore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubjectrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubscribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_charset_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_iconv_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_crypt_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_index_DASHformat_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fcc_DASHsave_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fcc_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_save_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_folder_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mbox_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_message_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_open_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_close_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_append_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_reply_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_send_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_send2_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_timeout_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_startup_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_shutdown_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setenv_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsetenv] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHyes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHno] = {
    .visible = true,
    .named = false,
  },
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_back_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_account_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__addresses] = {
    .visible = false,
    .named = true,
  },
  [sym_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_unalias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__regexes] = {
    .visible = false,
    .named = true,
  },
  [sym_alternates_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unalternates_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unalternative_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mime] = {
    .visible = true,
    .named = true,
  },
  [sym__mime_types] = {
    .visible = false,
    .named = true,
  },
  [sym__mimes] = {
    .visible = false,
    .named = true,
  },
  [sym_disposition] = {
    .visible = true,
    .named = true,
  },
  [sym_attachments_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unattachments_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_view_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unauto_view_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__maps] = {
    .visible = false,
    .named = true,
  },
  [sym_bind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unbind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_cd_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_color_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_echo_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_finish_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_group_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_hdr_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ifndef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ignore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_lists_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmacro_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox] = {
    .visible = true,
    .named = true,
  },
  [sym__mailboxes] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_mailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_named_mailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mailto_allow_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_lookup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mono_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_my_hdr_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_nospam_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_push_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_score_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sidebar_pin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sidebar_unpin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_spam_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_subjectrx_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_subscribe_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_uncolor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ungroup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unhdr_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unhook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unignore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unlists_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmailto_allow_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmime_lookup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmono_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmy_hdr_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unscore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubjectrx_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubscribe_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_iconv_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_crypt_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_index_format_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_fcc_save_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_fcc_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_save_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_folder_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mbox_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_message_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_open_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_close_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_append_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_reply_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_send_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_send2_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_startup_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_shutdown_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_set_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__options2] = {
    .visible = false,
    .named = true,
  },
  [sym__options] = {
    .visible = false,
    .named = true,
  },
  [sym_unset_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_reset_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_toggle_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_setenv_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsetenv_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_quadoption] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_back_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_source_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__addresses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regexes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mime_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mimes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__maps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mailboxes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_mailboxes_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__space_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sub_mime_type] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_path,
  },
  [2] = {
    [0] = anon_sym_account_DASHhook,
  },
  [4] = {
    [2] = alias_sym_sub_mime_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__string, 2,
    sym__string,
    alias_sym_path,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 37,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 37,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 51,
  [110] = 82,
  [111] = 111,
  [112] = 112,
  [113] = 11,
  [114] = 114,
  [115] = 115,
  [116] = 107,
  [117] = 117,
  [118] = 118,
  [119] = 9,
  [120] = 10,
  [121] = 8,
  [122] = 122,
  [123] = 123,
  [124] = 11,
  [125] = 8,
  [126] = 10,
  [127] = 9,
  [128] = 128,
  [129] = 82,
  [130] = 118,
  [131] = 117,
  [132] = 51,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 11,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 11,
  [172] = 8,
  [173] = 10,
  [174] = 9,
  [175] = 8,
  [176] = 10,
  [177] = 9,
  [178] = 107,
  [179] = 11,
  [180] = 8,
  [181] = 118,
  [182] = 117,
  [183] = 10,
  [184] = 9,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 133,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 117,
  [218] = 118,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 11,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 8,
  [228] = 10,
  [229] = 9,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 319,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 11,
  [331] = 8,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 319,
  [338] = 338,
  [339] = 339,
  [340] = 10,
  [341] = 341,
  [342] = 342,
  [343] = 341,
  [344] = 319,
  [345] = 336,
  [346] = 335,
  [347] = 9,
  [348] = 341,
  [349] = 349,
  [350] = 336,
  [351] = 335,
  [352] = 352,
  [353] = 341,
  [354] = 354,
  [355] = 336,
  [356] = 341,
  [357] = 319,
  [358] = 336,
  [359] = 341,
  [360] = 319,
  [361] = 336,
  [362] = 341,
  [363] = 319,
  [364] = 336,
  [365] = 341,
  [366] = 319,
  [367] = 336,
  [368] = 338,
  [369] = 333,
  [370] = 322,
  [371] = 324,
  [372] = 338,
  [373] = 333,
  [374] = 322,
  [375] = 324,
  [376] = 338,
  [377] = 333,
  [378] = 322,
  [379] = 338,
  [380] = 333,
  [381] = 322,
  [382] = 338,
  [383] = 333,
  [384] = 322,
  [385] = 338,
  [386] = 333,
  [387] = 322,
  [388] = 338,
  [389] = 333,
  [390] = 322,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(593);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '#') ADVANCE(819);
      if (lookahead == '&') ADVANCE(718);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '+') ADVANCE(632);
      if (lookahead == ',') ADVANCE(597);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(736);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '>') ADVANCE(605);
      if (lookahead == '?') ADVANCE(636);
      if (lookahead == '\\') SKIP(589)
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'q') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == 'y') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(607);
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(824);
      if (lookahead == '#') ADVANCE(620);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(825);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(623);
      if (lookahead == '#') ADVANCE(819);
      if (lookahead == '/') ADVANCE(630);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '?') ADVANCE(636);
      if (lookahead == '\\') SKIP(20)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(819);
      if (lookahead == ',') ADVANCE(597);
      if (lookahead == '.') ADVANCE(736);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == ' ') ADVANCE(624);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '.') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(769);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'y') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(768);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(739);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '.') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(773);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'y') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(772);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(795);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(796);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(797);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(798);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(799);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(800);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead != 0) ADVANCE(617);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(823);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '#') ADVANCE(819);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(30)
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead == '-') ADVANCE(804);
      if (lookahead == '\\') ADVANCE(776);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '-') ADVANCE(804);
      if (lookahead == '\\') ADVANCE(779);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(743);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(782);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '?') ADVANCE(637);
      if (lookahead == '\\') ADVANCE(785);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead == '\\') ADVANCE(788);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '\\') ADVANCE(791);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 38:
      if (lookahead == '&') ADVANCE(718);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '?') ADVANCE(636);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(611);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(612);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(597);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(613);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(614);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(324);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(239);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(241);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(247);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(249);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(250);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(256);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 67:
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(615);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 68:
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(616);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(766);
      END_STATE();
    case 70:
      if (lookahead == '\\') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(759);
      END_STATE();
    case 71:
      if (lookahead == '\\') ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(752);
      END_STATE();
    case 72:
      if (lookahead == '\\') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 73:
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 75:
      if (lookahead == '\\') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(455);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(238);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(564);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(315);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(396);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(240);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(441);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(443);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'g') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(439);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(184);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(659);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(536);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(655);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(663);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(664);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(412);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(355);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(677);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(641);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(660);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(157);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(407);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 241:
      if (lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(410);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(411);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 248:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(417);
      END_STATE();
    case 250:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 251:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 252:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 253:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(422);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(424);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(425);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(427);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 280:
      if (lookahead == 'j') ADVANCE(193);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 281:
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 282:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 283:
      if (lookahead == 'k') ADVANCE(687);
      END_STATE();
    case 284:
      if (lookahead == 'k') ADVANCE(702);
      END_STATE();
    case 285:
      if (lookahead == 'k') ADVANCE(705);
      END_STATE();
    case 286:
      if (lookahead == 'k') ADVANCE(707);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(703);
      END_STATE();
    case 288:
      if (lookahead == 'k') ADVANCE(711);
      END_STATE();
    case 289:
      if (lookahead == 'k') ADVANCE(708);
      END_STATE();
    case 290:
      if (lookahead == 'k') ADVANCE(699);
      END_STATE();
    case 291:
      if (lookahead == 'k') ADVANCE(698);
      END_STATE();
    case 292:
      if (lookahead == 'k') ADVANCE(710);
      END_STATE();
    case 293:
      if (lookahead == 'k') ADVANCE(712);
      END_STATE();
    case 294:
      if (lookahead == 'k') ADVANCE(709);
      END_STATE();
    case 295:
      if (lookahead == 'k') ADVANCE(704);
      END_STATE();
    case 296:
      if (lookahead == 'k') ADVANCE(594);
      END_STATE();
    case 297:
      if (lookahead == 'k') ADVANCE(697);
      END_STATE();
    case 298:
      if (lookahead == 'k') ADVANCE(706);
      END_STATE();
    case 299:
      if (lookahead == 'k') ADVANCE(714);
      END_STATE();
    case 300:
      if (lookahead == 'k') ADVANCE(713);
      END_STATE();
    case 301:
      if (lookahead == 'k') ADVANCE(701);
      END_STATE();
    case 302:
      if (lookahead == 'k') ADVANCE(715);
      END_STATE();
    case 303:
      if (lookahead == 'k') ADVANCE(700);
      END_STATE();
    case 304:
      if (lookahead == 'k') ADVANCE(558);
      END_STATE();
    case 305:
      if (lookahead == 'k') ADVANCE(559);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(459);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 322:
      if (lookahead == 'm') ADVANCE(681);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(676);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'x') ADVANCE(647);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 't') ADVANCE(716);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(563);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 430:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 432:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 439:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 445:
      if (lookahead == 'p') ADVANCE(649);
      END_STATE();
    case 446:
      if (lookahead == 'p') ADVANCE(661);
      END_STATE();
    case 447:
      if (lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 448:
      if (lookahead == 'p') ADVANCE(673);
      END_STATE();
    case 449:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 450:
      if (lookahead == 'p') ADVANCE(595);
      END_STATE();
    case 451:
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 452:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 453:
      if (lookahead == 'p') ADVANCE(545);
      END_STATE();
    case 454:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 455:
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 456:
      if (lookahead == 'p') ADVANCE(429);
      END_STATE();
    case 457:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 458:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 459:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 460:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(662);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(669);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(720);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 550:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 551:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 552:
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 553:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 554:
      if (lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 555:
      if (lookahead == 'u') ADVANCE(460);
      END_STATE();
    case 556:
      if (lookahead == 'u') ADVANCE(447);
      END_STATE();
    case 557:
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 558:
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 559:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 562:
      if (lookahead == 'v') ADVANCE(722);
      END_STATE();
    case 563:
      if (lookahead == 'v') ADVANCE(724);
      END_STATE();
    case 564:
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 565:
      if (lookahead == 'v') ADVANCE(217);
      END_STATE();
    case 566:
      if (lookahead == 'v') ADVANCE(222);
      END_STATE();
    case 567:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 568:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 569:
      if (lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 570:
      if (lookahead == 'v') ADVANCE(224);
      END_STATE();
    case 571:
      if (lookahead == 'w') ADVANCE(639);
      END_STATE();
    case 572:
      if (lookahead == 'w') ADVANCE(640);
      END_STATE();
    case 573:
      if (lookahead == 'w') ADVANCE(672);
      END_STATE();
    case 574:
      if (lookahead == 'w') ADVANCE(690);
      END_STATE();
    case 575:
      if (lookahead == 'w') ADVANCE(524);
      END_STATE();
    case 576:
      if (lookahead == 'w') ADVANCE(358);
      END_STATE();
    case 577:
      if (lookahead == 'x') ADVANCE(646);
      END_STATE();
    case 578:
      if (lookahead == 'x') ADVANCE(682);
      END_STATE();
    case 579:
      if (lookahead == 'x') ADVANCE(695);
      END_STATE();
    case 580:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 581:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 582:
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 583:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 584:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 585:
      if (lookahead == 'y') ADVANCE(651);
      END_STATE();
    case 586:
      if (lookahead == 'y') ADVANCE(453);
      END_STATE();
    case 587:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 588:
      if (eof) ADVANCE(593);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 589:
      if (eof) ADVANCE(593);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(588)
      END_STATE();
    case 590:
      if (eof) ADVANCE(593);
      if (lookahead == '\n') SKIP(592)
      END_STATE();
    case 591:
      if (eof) ADVANCE(593);
      if (lookahead == '\n') SKIP(592)
      if (lookahead == '\r') SKIP(590)
      END_STATE();
    case 592:
      if (eof) ADVANCE(593);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(819);
      if (lookahead == ',') ADVANCE(597);
      if (lookahead == '.') ADVANCE(736);
      if (lookahead == '\\') SKIP(591)
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_account_DASHhook);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_unalias);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_key_token2);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\t') ADVANCE(607);
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(824);
      if (lookahead == '#') ADVANCE(620);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '"') ADVANCE(761);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '`') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(617);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\n') ADVANCE(794);
      if (lookahead == '\r') ADVANCE(622);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\r') ADVANCE(621);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(606);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(606);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == ',') ADVANCE(597);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(606);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(606);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(606);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(602);
      if (lookahead == '\\') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(616);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(606);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == 'g') ADVANCE(495);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(819);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_key_token3);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\n') ADVANCE(794);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(825);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == ' ') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(769);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_alternates);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_unalternates);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_alternative_order);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_unalternative_order);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_attachments);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_unattachments);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_auto_view);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_unauto_view);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_attach);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_browser);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_compose);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_editor);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_mix);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_pager);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_pgp);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_postpone);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_smime);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_function);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_unbind);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_finish);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_hdr_order);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_ifdef);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_ifndef);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_lists);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_unmacro);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_mailboxes);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_named_DASHmailboxes);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_unmailboxes);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_mailto_allow);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_mime_lookup);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_mono);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_my_hdr);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_nospam);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_sidebar_pin);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_sidebar_unpin);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_spam);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_subjectrx);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_subscribe);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_uncolor);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_unhdr_order);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_unhook);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_unignore);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_unlists);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_unmailto_allow);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_unmime_lookup);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_unmono);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_unmy_hdr);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_unscore);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_unsubjectrx);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_unsubscribe);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_charset_DASHhook);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_iconv_DASHhook);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_crypt_DASHhook);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_index_DASHformat_DASHhook);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_fcc_DASHsave_DASHhook);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_fcc_DASHhook);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_save_DASHhook);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_folder_DASHhook);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_mbox_DASHhook);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_message_DASHhook);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_open_DASHhook);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_close_DASHhook);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_append_DASHhook);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_reply_DASHhook);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_send_DASHhook);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_send2_DASHhook);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_timeout_DASHhook);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_startup_DASHhook);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_shutdown_DASHhook);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_setenv_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_unsetenv);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '\\') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == ' ') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(769);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(739);
      if (lookahead == '\\') ADVANCE(773);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(608);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\\') ADVANCE(776);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\\') ADVANCE(779);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(743);
      if (lookahead == '\\') ADVANCE(782);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(785);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(788);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(791);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_back_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(751);
      if (lookahead == '\r') ADVANCE(750);
      if (lookahead == '\\') ADVANCE(753);
      if (lookahead != 0) ADVANCE(752);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_back_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(752);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_back_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_back_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_back_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(753);
      if (lookahead != 0) ADVANCE(752);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(759);
      if (lookahead == '\\') ADVANCE(760);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(759);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\\') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\\') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(759);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(759);
      if (lookahead == '\\') ADVANCE(760);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\r') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(767);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\\') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(766);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\\') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(766);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\\') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(766);
      if (lookahead == '\\') ADVANCE(767);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == ' ') ADVANCE(624);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '.') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'y') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(816);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(771);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(739);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '.') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(774);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == 'y') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\r') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(795);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(795);
      if (lookahead == '\r') ADVANCE(778);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(796);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(796);
      if (lookahead == '\r') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\r') ADVANCE(784);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(798);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(798);
      if (lookahead == '\r') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(798);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\r') ADVANCE(790);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(793);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '<') ADVANCE(603);
      if (lookahead == '\\') ADVANCE(609);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(617);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead == '-') ADVANCE(804);
      if (lookahead == '\\') ADVANCE(777);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '-') ADVANCE(804);
      if (lookahead == '\\') ADVANCE(780);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(743);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '\\') ADVANCE(783);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(744);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '+') ADVANCE(633);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '?') ADVANCE(637);
      if (lookahead == '\\') ADVANCE(786);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(745);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead == '\\') ADVANCE(789);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(746);
      if (lookahead == '"') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(792);
      if (lookahead == '`') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(806);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'g') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'k') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == 'y') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'o') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'o') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'p') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'r') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead == 'u') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(819);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(607);
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(610);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(825);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(623);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(826);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(823);
      if (lookahead == '\r') ADVANCE(27);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(607);
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead == '\r') ADVANCE(607);
      if (lookahead == ' ') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(610);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(825);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(623);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(826);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 592},
  [2] = {.lex_state = 592},
  [3] = {.lex_state = 592},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 592},
  [6] = {.lex_state = 592},
  [7] = {.lex_state = 592},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 37},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 40},
  [115] = {.lex_state = 592},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 67},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 37},
  [131] = {.lex_state = 37},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 37},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 67},
  [136] = {.lex_state = 67},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 592},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 37},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 67},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 592},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 42},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 592},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 67},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 592},
  [167] = {.lex_state = 38},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 40},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 40},
  [175] = {.lex_state = 592},
  [176] = {.lex_state = 592},
  [177] = {.lex_state = 592},
  [178] = {.lex_state = 68},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 40},
  [182] = {.lex_state = 40},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 42},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 592},
  [188] = {.lex_state = 592},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 592},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 592},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 42},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 592},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 592},
  [204] = {.lex_state = 592},
  [205] = {.lex_state = 592},
  [206] = {.lex_state = 592},
  [207] = {.lex_state = 592},
  [208] = {.lex_state = 592},
  [209] = {.lex_state = 592},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 592},
  [212] = {.lex_state = 592},
  [213] = {.lex_state = 592},
  [214] = {.lex_state = 592},
  [215] = {.lex_state = 592},
  [216] = {.lex_state = 592},
  [217] = {.lex_state = 67},
  [218] = {.lex_state = 67},
  [219] = {.lex_state = 592},
  [220] = {.lex_state = 592},
  [221] = {.lex_state = 592},
  [222] = {.lex_state = 67},
  [223] = {.lex_state = 592},
  [224] = {.lex_state = 592},
  [225] = {.lex_state = 592},
  [226] = {.lex_state = 592},
  [227] = {.lex_state = 67},
  [228] = {.lex_state = 67},
  [229] = {.lex_state = 67},
  [230] = {.lex_state = 592},
  [231] = {.lex_state = 592},
  [232] = {.lex_state = 592},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 592},
  [235] = {.lex_state = 592},
  [236] = {.lex_state = 592},
  [237] = {.lex_state = 592},
  [238] = {.lex_state = 592},
  [239] = {.lex_state = 592},
  [240] = {.lex_state = 592},
  [241] = {.lex_state = 592},
  [242] = {.lex_state = 592},
  [243] = {.lex_state = 592},
  [244] = {.lex_state = 592},
  [245] = {.lex_state = 592},
  [246] = {.lex_state = 592},
  [247] = {.lex_state = 592},
  [248] = {.lex_state = 592},
  [249] = {.lex_state = 592},
  [250] = {.lex_state = 592},
  [251] = {.lex_state = 592},
  [252] = {.lex_state = 592},
  [253] = {.lex_state = 592},
  [254] = {.lex_state = 592},
  [255] = {.lex_state = 592},
  [256] = {.lex_state = 592},
  [257] = {.lex_state = 592},
  [258] = {.lex_state = 592},
  [259] = {.lex_state = 592},
  [260] = {.lex_state = 592},
  [261] = {.lex_state = 592},
  [262] = {.lex_state = 592},
  [263] = {.lex_state = 592},
  [264] = {.lex_state = 592},
  [265] = {.lex_state = 592},
  [266] = {.lex_state = 592},
  [267] = {.lex_state = 592},
  [268] = {.lex_state = 592},
  [269] = {.lex_state = 592},
  [270] = {.lex_state = 592},
  [271] = {.lex_state = 592},
  [272] = {.lex_state = 592},
  [273] = {.lex_state = 592},
  [274] = {.lex_state = 38},
  [275] = {.lex_state = 592},
  [276] = {.lex_state = 592},
  [277] = {.lex_state = 592},
  [278] = {.lex_state = 592},
  [279] = {.lex_state = 592},
  [280] = {.lex_state = 592},
  [281] = {.lex_state = 592},
  [282] = {.lex_state = 592},
  [283] = {.lex_state = 592},
  [284] = {.lex_state = 592},
  [285] = {.lex_state = 592},
  [286] = {.lex_state = 592},
  [287] = {.lex_state = 592},
  [288] = {.lex_state = 592},
  [289] = {.lex_state = 592},
  [290] = {.lex_state = 592},
  [291] = {.lex_state = 592},
  [292] = {.lex_state = 592},
  [293] = {.lex_state = 592},
  [294] = {.lex_state = 592},
  [295] = {.lex_state = 592},
  [296] = {.lex_state = 592},
  [297] = {.lex_state = 592},
  [298] = {.lex_state = 592},
  [299] = {.lex_state = 592},
  [300] = {.lex_state = 592},
  [301] = {.lex_state = 592},
  [302] = {.lex_state = 592},
  [303] = {.lex_state = 592},
  [304] = {.lex_state = 592},
  [305] = {.lex_state = 592},
  [306] = {.lex_state = 592},
  [307] = {.lex_state = 592},
  [308] = {.lex_state = 592},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 41},
  [311] = {.lex_state = 38},
  [312] = {.lex_state = 38},
  [313] = {.lex_state = 27},
  [314] = {.lex_state = 38},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 41},
  [317] = {.lex_state = 41},
  [318] = {.lex_state = 41},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 69},
  [323] = {.lex_state = 38},
  [324] = {.lex_state = 74},
  [325] = {.lex_state = 38},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 75},
  [329] = {.lex_state = 27},
  [330] = {.lex_state = 41},
  [331] = {.lex_state = 41},
  [332] = {.lex_state = 41},
  [333] = {.lex_state = 70},
  [334] = {.lex_state = 41},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 71},
  [339] = {.lex_state = 38},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 72},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 38},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 71},
  [369] = {.lex_state = 70},
  [370] = {.lex_state = 69},
  [371] = {.lex_state = 74},
  [372] = {.lex_state = 71},
  [373] = {.lex_state = 70},
  [374] = {.lex_state = 69},
  [375] = {.lex_state = 74},
  [376] = {.lex_state = 71},
  [377] = {.lex_state = 70},
  [378] = {.lex_state = 69},
  [379] = {.lex_state = 71},
  [380] = {.lex_state = 70},
  [381] = {.lex_state = 69},
  [382] = {.lex_state = 71},
  [383] = {.lex_state = 70},
  [384] = {.lex_state = 69},
  [385] = {.lex_state = 71},
  [386] = {.lex_state = 70},
  [387] = {.lex_state = 69},
  [388] = {.lex_state = 71},
  [389] = {.lex_state = 70},
  [390] = {.lex_state = 69},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_account_DASHhook] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_unalias] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_alternates] = ACTIONS(1),
    [anon_sym_unalternates] = ACTIONS(1),
    [anon_sym_alternative_order] = ACTIONS(1),
    [anon_sym_unalternative_order] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_unattachments] = ACTIONS(1),
    [anon_sym_auto_view] = ACTIONS(1),
    [anon_sym_unauto_view] = ACTIONS(1),
    [anon_sym_attach] = ACTIONS(1),
    [anon_sym_browser] = ACTIONS(1),
    [anon_sym_compose] = ACTIONS(1),
    [anon_sym_editor] = ACTIONS(1),
    [anon_sym_generic] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_mix] = ACTIONS(1),
    [anon_sym_pager] = ACTIONS(1),
    [anon_sym_pgp] = ACTIONS(1),
    [anon_sym_postpone] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_smime] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_unbind] = ACTIONS(1),
    [anon_sym_cd] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_finish] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_hdr_order] = ACTIONS(1),
    [anon_sym_ifdef] = ACTIONS(1),
    [anon_sym_ifndef] = ACTIONS(1),
    [anon_sym_ignore] = ACTIONS(1),
    [anon_sym_lists] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_unmacro] = ACTIONS(1),
    [anon_sym_mailboxes] = ACTIONS(1),
    [anon_sym_named_DASHmailboxes] = ACTIONS(1),
    [anon_sym_unmailboxes] = ACTIONS(1),
    [anon_sym_mailto_allow] = ACTIONS(1),
    [anon_sym_mime_lookup] = ACTIONS(1),
    [anon_sym_mono] = ACTIONS(1),
    [anon_sym_my_hdr] = ACTIONS(1),
    [anon_sym_nospam] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_score] = ACTIONS(1),
    [anon_sym_sidebar_pin] = ACTIONS(1),
    [anon_sym_sidebar_unpin] = ACTIONS(1),
    [anon_sym_spam] = ACTIONS(1),
    [anon_sym_subjectrx] = ACTIONS(1),
    [anon_sym_subscribe] = ACTIONS(1),
    [anon_sym_uncolor] = ACTIONS(1),
    [anon_sym_ungroup] = ACTIONS(1),
    [anon_sym_unhdr_order] = ACTIONS(1),
    [anon_sym_unhook] = ACTIONS(1),
    [anon_sym_unignore] = ACTIONS(1),
    [anon_sym_unlists] = ACTIONS(1),
    [anon_sym_unmailto_allow] = ACTIONS(1),
    [anon_sym_unmime_lookup] = ACTIONS(1),
    [anon_sym_unmono] = ACTIONS(1),
    [anon_sym_unmy_hdr] = ACTIONS(1),
    [anon_sym_unscore] = ACTIONS(1),
    [anon_sym_unsubjectrx] = ACTIONS(1),
    [anon_sym_unsubscribe] = ACTIONS(1),
    [anon_sym_charset_DASHhook] = ACTIONS(1),
    [anon_sym_iconv_DASHhook] = ACTIONS(1),
    [anon_sym_crypt_DASHhook] = ACTIONS(1),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(1),
    [anon_sym_fcc_DASHhook] = ACTIONS(1),
    [anon_sym_save_DASHhook] = ACTIONS(1),
    [anon_sym_folder_DASHhook] = ACTIONS(1),
    [anon_sym_mbox_DASHhook] = ACTIONS(1),
    [anon_sym_message_DASHhook] = ACTIONS(1),
    [anon_sym_open_DASHhook] = ACTIONS(1),
    [anon_sym_close_DASHhook] = ACTIONS(1),
    [anon_sym_append_DASHhook] = ACTIONS(1),
    [anon_sym_reply_DASHhook] = ACTIONS(1),
    [anon_sym_send_DASHhook] = ACTIONS(1),
    [anon_sym_send2_DASHhook] = ACTIONS(1),
    [anon_sym_timeout_DASHhook] = ACTIONS(1),
    [anon_sym_startup_DASHhook] = ACTIONS(1),
    [anon_sym_shutdown_DASHhook] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_setenv] = ACTIONS(1),
    [anon_sym_unsetenv] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_ask_DASHyes] = ACTIONS(1),
    [anon_sym_ask_DASHno] = ACTIONS(1),
    [sym__int] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(349),
    [sym__code] = STATE(115),
    [sym_account_hook_directive] = STATE(115),
    [sym_alias_directive] = STATE(115),
    [sym_unalias_directive] = STATE(115),
    [sym_alternates_directive] = STATE(115),
    [sym_unalternates_directive] = STATE(115),
    [sym_alternative_order_directive] = STATE(115),
    [sym_unalternative_order_directive] = STATE(115),
    [sym_attachments_directive] = STATE(115),
    [sym_unattachments_directive] = STATE(115),
    [sym_auto_view_directive] = STATE(115),
    [sym_unauto_view_directive] = STATE(115),
    [sym_bind_directive] = STATE(115),
    [sym_unbind_directive] = STATE(115),
    [sym_cd_directive] = STATE(115),
    [sym_color_directive] = STATE(115),
    [sym_echo_directive] = STATE(115),
    [sym_exec_directive] = STATE(115),
    [sym_finish_directive] = STATE(115),
    [sym_group_directive] = STATE(115),
    [sym_hdr_order_directive] = STATE(115),
    [sym_ifdef_directive] = STATE(115),
    [sym_ifndef_directive] = STATE(115),
    [sym_ignore_directive] = STATE(115),
    [sym_lists_directive] = STATE(115),
    [sym_macro_directive] = STATE(115),
    [sym_unmacro_directive] = STATE(115),
    [sym_mailboxes_directive] = STATE(115),
    [sym_named_mailboxes_directive] = STATE(115),
    [sym_unmailboxes_directive] = STATE(115),
    [sym_mailto_allow_directive] = STATE(115),
    [sym_mime_lookup_directive] = STATE(115),
    [sym_mono_directive] = STATE(115),
    [sym_my_hdr_directive] = STATE(115),
    [sym_nospam_directive] = STATE(115),
    [sym_push_directive] = STATE(115),
    [sym_score_directive] = STATE(115),
    [sym_sidebar_pin_directive] = STATE(115),
    [sym_sidebar_unpin_directive] = STATE(115),
    [sym_spam_directive] = STATE(115),
    [sym_subjectrx_directive] = STATE(115),
    [sym_subscribe_directive] = STATE(115),
    [sym_uncolor_directive] = STATE(115),
    [sym_ungroup_directive] = STATE(115),
    [sym_unhdr_order_directive] = STATE(115),
    [sym_unhook_directive] = STATE(115),
    [sym_unignore_directive] = STATE(115),
    [sym_unlists_directive] = STATE(115),
    [sym_unmailto_allow_directive] = STATE(115),
    [sym_unmime_lookup_directive] = STATE(115),
    [sym_unmono_directive] = STATE(115),
    [sym_unmy_hdr_directive] = STATE(115),
    [sym_unscore_directive] = STATE(115),
    [sym_unsubjectrx_directive] = STATE(115),
    [sym_unsubscribe_directive] = STATE(115),
    [sym_charset_hook_directive] = STATE(115),
    [sym_iconv_hook_directive] = STATE(115),
    [sym_crypt_hook_directive] = STATE(115),
    [sym_index_format_hook_directive] = STATE(115),
    [sym_fcc_save_hook_directive] = STATE(115),
    [sym_fcc_hook_directive] = STATE(115),
    [sym_save_hook_directive] = STATE(115),
    [sym_folder_hook_directive] = STATE(115),
    [sym_mbox_hook_directive] = STATE(115),
    [sym_message_hook_directive] = STATE(115),
    [sym_open_hook_directive] = STATE(115),
    [sym_close_hook_directive] = STATE(115),
    [sym_append_hook_directive] = STATE(115),
    [sym_reply_hook_directive] = STATE(115),
    [sym_send_hook_directive] = STATE(115),
    [sym_send2_hook_directive] = STATE(115),
    [sym_timeout_hook_directive] = STATE(115),
    [sym_startup_hook_directive] = STATE(115),
    [sym_shutdown_hook_directive] = STATE(115),
    [sym_set_directive] = STATE(115),
    [sym_unset_directive] = STATE(115),
    [sym_reset_directive] = STATE(115),
    [sym_toggle_directive] = STATE(115),
    [sym_setenv_directive] = STATE(115),
    [sym_unsetenv_directive] = STATE(115),
    [sym_source_directive] = STATE(115),
    [sym__space] = STATE(313),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_account_DASHhook] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_unalias] = ACTIONS(9),
    [anon_sym_alternates] = ACTIONS(11),
    [anon_sym_unalternates] = ACTIONS(13),
    [anon_sym_alternative_order] = ACTIONS(15),
    [anon_sym_unalternative_order] = ACTIONS(17),
    [anon_sym_attachments] = ACTIONS(19),
    [anon_sym_unattachments] = ACTIONS(21),
    [anon_sym_auto_view] = ACTIONS(23),
    [anon_sym_unauto_view] = ACTIONS(25),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_unbind] = ACTIONS(29),
    [anon_sym_cd] = ACTIONS(31),
    [anon_sym_color] = ACTIONS(33),
    [anon_sym_echo] = ACTIONS(35),
    [anon_sym_exec] = ACTIONS(37),
    [anon_sym_finish] = ACTIONS(39),
    [anon_sym_group] = ACTIONS(41),
    [anon_sym_hdr_order] = ACTIONS(43),
    [anon_sym_ifdef] = ACTIONS(45),
    [anon_sym_ifndef] = ACTIONS(47),
    [anon_sym_ignore] = ACTIONS(49),
    [anon_sym_lists] = ACTIONS(51),
    [anon_sym_macro] = ACTIONS(53),
    [anon_sym_unmacro] = ACTIONS(55),
    [anon_sym_mailboxes] = ACTIONS(57),
    [anon_sym_named_DASHmailboxes] = ACTIONS(59),
    [anon_sym_unmailboxes] = ACTIONS(61),
    [anon_sym_mailto_allow] = ACTIONS(63),
    [anon_sym_mime_lookup] = ACTIONS(65),
    [anon_sym_mono] = ACTIONS(67),
    [anon_sym_my_hdr] = ACTIONS(69),
    [anon_sym_nospam] = ACTIONS(71),
    [anon_sym_push] = ACTIONS(73),
    [anon_sym_score] = ACTIONS(75),
    [anon_sym_sidebar_pin] = ACTIONS(77),
    [anon_sym_sidebar_unpin] = ACTIONS(79),
    [anon_sym_spam] = ACTIONS(81),
    [anon_sym_subjectrx] = ACTIONS(83),
    [anon_sym_subscribe] = ACTIONS(85),
    [anon_sym_uncolor] = ACTIONS(87),
    [anon_sym_ungroup] = ACTIONS(89),
    [anon_sym_unhdr_order] = ACTIONS(91),
    [anon_sym_unhook] = ACTIONS(93),
    [anon_sym_unignore] = ACTIONS(95),
    [anon_sym_unlists] = ACTIONS(97),
    [anon_sym_unmailto_allow] = ACTIONS(99),
    [anon_sym_unmime_lookup] = ACTIONS(101),
    [anon_sym_unmono] = ACTIONS(103),
    [anon_sym_unmy_hdr] = ACTIONS(105),
    [anon_sym_unscore] = ACTIONS(107),
    [anon_sym_unsubjectrx] = ACTIONS(109),
    [anon_sym_unsubscribe] = ACTIONS(111),
    [anon_sym_charset_DASHhook] = ACTIONS(113),
    [anon_sym_iconv_DASHhook] = ACTIONS(115),
    [anon_sym_crypt_DASHhook] = ACTIONS(117),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(119),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(121),
    [anon_sym_fcc_DASHhook] = ACTIONS(123),
    [anon_sym_save_DASHhook] = ACTIONS(125),
    [anon_sym_folder_DASHhook] = ACTIONS(127),
    [anon_sym_mbox_DASHhook] = ACTIONS(129),
    [anon_sym_message_DASHhook] = ACTIONS(131),
    [anon_sym_open_DASHhook] = ACTIONS(133),
    [anon_sym_close_DASHhook] = ACTIONS(135),
    [anon_sym_append_DASHhook] = ACTIONS(137),
    [anon_sym_reply_DASHhook] = ACTIONS(139),
    [anon_sym_send_DASHhook] = ACTIONS(141),
    [anon_sym_send2_DASHhook] = ACTIONS(143),
    [anon_sym_timeout_DASHhook] = ACTIONS(145),
    [anon_sym_startup_DASHhook] = ACTIONS(147),
    [anon_sym_shutdown_DASHhook] = ACTIONS(149),
    [anon_sym_set] = ACTIONS(151),
    [anon_sym_unset] = ACTIONS(153),
    [anon_sym_reset] = ACTIONS(155),
    [anon_sym_toggle] = ACTIONS(157),
    [anon_sym_setenv] = ACTIONS(159),
    [anon_sym_unsetenv] = ACTIONS(161),
    [anon_sym_source] = ACTIONS(163),
    [sym_comment] = ACTIONS(165),
    [sym__eol] = ACTIONS(167),
    [aux_sym__space_token1] = ACTIONS(169),
  },
  [2] = {
    [sym__code] = STATE(115),
    [sym_account_hook_directive] = STATE(115),
    [sym_alias_directive] = STATE(115),
    [sym_unalias_directive] = STATE(115),
    [sym_alternates_directive] = STATE(115),
    [sym_unalternates_directive] = STATE(115),
    [sym_alternative_order_directive] = STATE(115),
    [sym_unalternative_order_directive] = STATE(115),
    [sym_attachments_directive] = STATE(115),
    [sym_unattachments_directive] = STATE(115),
    [sym_auto_view_directive] = STATE(115),
    [sym_unauto_view_directive] = STATE(115),
    [sym_bind_directive] = STATE(115),
    [sym_unbind_directive] = STATE(115),
    [sym_cd_directive] = STATE(115),
    [sym_color_directive] = STATE(115),
    [sym_echo_directive] = STATE(115),
    [sym_exec_directive] = STATE(115),
    [sym_finish_directive] = STATE(115),
    [sym_group_directive] = STATE(115),
    [sym_hdr_order_directive] = STATE(115),
    [sym_ifdef_directive] = STATE(115),
    [sym_ifndef_directive] = STATE(115),
    [sym_ignore_directive] = STATE(115),
    [sym_lists_directive] = STATE(115),
    [sym_macro_directive] = STATE(115),
    [sym_unmacro_directive] = STATE(115),
    [sym_mailboxes_directive] = STATE(115),
    [sym_named_mailboxes_directive] = STATE(115),
    [sym_unmailboxes_directive] = STATE(115),
    [sym_mailto_allow_directive] = STATE(115),
    [sym_mime_lookup_directive] = STATE(115),
    [sym_mono_directive] = STATE(115),
    [sym_my_hdr_directive] = STATE(115),
    [sym_nospam_directive] = STATE(115),
    [sym_push_directive] = STATE(115),
    [sym_score_directive] = STATE(115),
    [sym_sidebar_pin_directive] = STATE(115),
    [sym_sidebar_unpin_directive] = STATE(115),
    [sym_spam_directive] = STATE(115),
    [sym_subjectrx_directive] = STATE(115),
    [sym_subscribe_directive] = STATE(115),
    [sym_uncolor_directive] = STATE(115),
    [sym_ungroup_directive] = STATE(115),
    [sym_unhdr_order_directive] = STATE(115),
    [sym_unhook_directive] = STATE(115),
    [sym_unignore_directive] = STATE(115),
    [sym_unlists_directive] = STATE(115),
    [sym_unmailto_allow_directive] = STATE(115),
    [sym_unmime_lookup_directive] = STATE(115),
    [sym_unmono_directive] = STATE(115),
    [sym_unmy_hdr_directive] = STATE(115),
    [sym_unscore_directive] = STATE(115),
    [sym_unsubjectrx_directive] = STATE(115),
    [sym_unsubscribe_directive] = STATE(115),
    [sym_charset_hook_directive] = STATE(115),
    [sym_iconv_hook_directive] = STATE(115),
    [sym_crypt_hook_directive] = STATE(115),
    [sym_index_format_hook_directive] = STATE(115),
    [sym_fcc_save_hook_directive] = STATE(115),
    [sym_fcc_hook_directive] = STATE(115),
    [sym_save_hook_directive] = STATE(115),
    [sym_folder_hook_directive] = STATE(115),
    [sym_mbox_hook_directive] = STATE(115),
    [sym_message_hook_directive] = STATE(115),
    [sym_open_hook_directive] = STATE(115),
    [sym_close_hook_directive] = STATE(115),
    [sym_append_hook_directive] = STATE(115),
    [sym_reply_hook_directive] = STATE(115),
    [sym_send_hook_directive] = STATE(115),
    [sym_send2_hook_directive] = STATE(115),
    [sym_timeout_hook_directive] = STATE(115),
    [sym_startup_hook_directive] = STATE(115),
    [sym_shutdown_hook_directive] = STATE(115),
    [sym_set_directive] = STATE(115),
    [sym_unset_directive] = STATE(115),
    [sym_reset_directive] = STATE(115),
    [sym_toggle_directive] = STATE(115),
    [sym_setenv_directive] = STATE(115),
    [sym_unsetenv_directive] = STATE(115),
    [sym_source_directive] = STATE(115),
    [sym__space] = STATE(313),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_account_DASHhook] = ACTIONS(173),
    [anon_sym_alias] = ACTIONS(176),
    [anon_sym_unalias] = ACTIONS(179),
    [anon_sym_alternates] = ACTIONS(182),
    [anon_sym_unalternates] = ACTIONS(185),
    [anon_sym_alternative_order] = ACTIONS(188),
    [anon_sym_unalternative_order] = ACTIONS(191),
    [anon_sym_attachments] = ACTIONS(194),
    [anon_sym_unattachments] = ACTIONS(197),
    [anon_sym_auto_view] = ACTIONS(200),
    [anon_sym_unauto_view] = ACTIONS(203),
    [anon_sym_bind] = ACTIONS(206),
    [anon_sym_unbind] = ACTIONS(209),
    [anon_sym_cd] = ACTIONS(212),
    [anon_sym_color] = ACTIONS(215),
    [anon_sym_echo] = ACTIONS(218),
    [anon_sym_exec] = ACTIONS(221),
    [anon_sym_finish] = ACTIONS(224),
    [anon_sym_group] = ACTIONS(227),
    [anon_sym_hdr_order] = ACTIONS(230),
    [anon_sym_ifdef] = ACTIONS(233),
    [anon_sym_ifndef] = ACTIONS(236),
    [anon_sym_ignore] = ACTIONS(239),
    [anon_sym_lists] = ACTIONS(242),
    [anon_sym_macro] = ACTIONS(245),
    [anon_sym_unmacro] = ACTIONS(248),
    [anon_sym_mailboxes] = ACTIONS(251),
    [anon_sym_named_DASHmailboxes] = ACTIONS(254),
    [anon_sym_unmailboxes] = ACTIONS(257),
    [anon_sym_mailto_allow] = ACTIONS(260),
    [anon_sym_mime_lookup] = ACTIONS(263),
    [anon_sym_mono] = ACTIONS(266),
    [anon_sym_my_hdr] = ACTIONS(269),
    [anon_sym_nospam] = ACTIONS(272),
    [anon_sym_push] = ACTIONS(275),
    [anon_sym_score] = ACTIONS(278),
    [anon_sym_sidebar_pin] = ACTIONS(281),
    [anon_sym_sidebar_unpin] = ACTIONS(284),
    [anon_sym_spam] = ACTIONS(287),
    [anon_sym_subjectrx] = ACTIONS(290),
    [anon_sym_subscribe] = ACTIONS(293),
    [anon_sym_uncolor] = ACTIONS(296),
    [anon_sym_ungroup] = ACTIONS(299),
    [anon_sym_unhdr_order] = ACTIONS(302),
    [anon_sym_unhook] = ACTIONS(305),
    [anon_sym_unignore] = ACTIONS(308),
    [anon_sym_unlists] = ACTIONS(311),
    [anon_sym_unmailto_allow] = ACTIONS(314),
    [anon_sym_unmime_lookup] = ACTIONS(317),
    [anon_sym_unmono] = ACTIONS(320),
    [anon_sym_unmy_hdr] = ACTIONS(323),
    [anon_sym_unscore] = ACTIONS(326),
    [anon_sym_unsubjectrx] = ACTIONS(329),
    [anon_sym_unsubscribe] = ACTIONS(332),
    [anon_sym_charset_DASHhook] = ACTIONS(335),
    [anon_sym_iconv_DASHhook] = ACTIONS(338),
    [anon_sym_crypt_DASHhook] = ACTIONS(341),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(344),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(347),
    [anon_sym_fcc_DASHhook] = ACTIONS(350),
    [anon_sym_save_DASHhook] = ACTIONS(353),
    [anon_sym_folder_DASHhook] = ACTIONS(356),
    [anon_sym_mbox_DASHhook] = ACTIONS(359),
    [anon_sym_message_DASHhook] = ACTIONS(362),
    [anon_sym_open_DASHhook] = ACTIONS(365),
    [anon_sym_close_DASHhook] = ACTIONS(368),
    [anon_sym_append_DASHhook] = ACTIONS(371),
    [anon_sym_reply_DASHhook] = ACTIONS(374),
    [anon_sym_send_DASHhook] = ACTIONS(377),
    [anon_sym_send2_DASHhook] = ACTIONS(380),
    [anon_sym_timeout_DASHhook] = ACTIONS(383),
    [anon_sym_startup_DASHhook] = ACTIONS(386),
    [anon_sym_shutdown_DASHhook] = ACTIONS(389),
    [anon_sym_set] = ACTIONS(392),
    [anon_sym_unset] = ACTIONS(395),
    [anon_sym_reset] = ACTIONS(398),
    [anon_sym_toggle] = ACTIONS(401),
    [anon_sym_setenv] = ACTIONS(404),
    [anon_sym_unsetenv] = ACTIONS(407),
    [anon_sym_source] = ACTIONS(410),
    [sym_comment] = ACTIONS(413),
    [sym__eol] = ACTIONS(416),
    [aux_sym__space_token1] = ACTIONS(419),
  },
  [3] = {
    [sym__code] = STATE(115),
    [sym_account_hook_directive] = STATE(115),
    [sym_alias_directive] = STATE(115),
    [sym_unalias_directive] = STATE(115),
    [sym_alternates_directive] = STATE(115),
    [sym_unalternates_directive] = STATE(115),
    [sym_alternative_order_directive] = STATE(115),
    [sym_unalternative_order_directive] = STATE(115),
    [sym_attachments_directive] = STATE(115),
    [sym_unattachments_directive] = STATE(115),
    [sym_auto_view_directive] = STATE(115),
    [sym_unauto_view_directive] = STATE(115),
    [sym_bind_directive] = STATE(115),
    [sym_unbind_directive] = STATE(115),
    [sym_cd_directive] = STATE(115),
    [sym_color_directive] = STATE(115),
    [sym_echo_directive] = STATE(115),
    [sym_exec_directive] = STATE(115),
    [sym_finish_directive] = STATE(115),
    [sym_group_directive] = STATE(115),
    [sym_hdr_order_directive] = STATE(115),
    [sym_ifdef_directive] = STATE(115),
    [sym_ifndef_directive] = STATE(115),
    [sym_ignore_directive] = STATE(115),
    [sym_lists_directive] = STATE(115),
    [sym_macro_directive] = STATE(115),
    [sym_unmacro_directive] = STATE(115),
    [sym_mailboxes_directive] = STATE(115),
    [sym_named_mailboxes_directive] = STATE(115),
    [sym_unmailboxes_directive] = STATE(115),
    [sym_mailto_allow_directive] = STATE(115),
    [sym_mime_lookup_directive] = STATE(115),
    [sym_mono_directive] = STATE(115),
    [sym_my_hdr_directive] = STATE(115),
    [sym_nospam_directive] = STATE(115),
    [sym_push_directive] = STATE(115),
    [sym_score_directive] = STATE(115),
    [sym_sidebar_pin_directive] = STATE(115),
    [sym_sidebar_unpin_directive] = STATE(115),
    [sym_spam_directive] = STATE(115),
    [sym_subjectrx_directive] = STATE(115),
    [sym_subscribe_directive] = STATE(115),
    [sym_uncolor_directive] = STATE(115),
    [sym_ungroup_directive] = STATE(115),
    [sym_unhdr_order_directive] = STATE(115),
    [sym_unhook_directive] = STATE(115),
    [sym_unignore_directive] = STATE(115),
    [sym_unlists_directive] = STATE(115),
    [sym_unmailto_allow_directive] = STATE(115),
    [sym_unmime_lookup_directive] = STATE(115),
    [sym_unmono_directive] = STATE(115),
    [sym_unmy_hdr_directive] = STATE(115),
    [sym_unscore_directive] = STATE(115),
    [sym_unsubjectrx_directive] = STATE(115),
    [sym_unsubscribe_directive] = STATE(115),
    [sym_charset_hook_directive] = STATE(115),
    [sym_iconv_hook_directive] = STATE(115),
    [sym_crypt_hook_directive] = STATE(115),
    [sym_index_format_hook_directive] = STATE(115),
    [sym_fcc_save_hook_directive] = STATE(115),
    [sym_fcc_hook_directive] = STATE(115),
    [sym_save_hook_directive] = STATE(115),
    [sym_folder_hook_directive] = STATE(115),
    [sym_mbox_hook_directive] = STATE(115),
    [sym_message_hook_directive] = STATE(115),
    [sym_open_hook_directive] = STATE(115),
    [sym_close_hook_directive] = STATE(115),
    [sym_append_hook_directive] = STATE(115),
    [sym_reply_hook_directive] = STATE(115),
    [sym_send_hook_directive] = STATE(115),
    [sym_send2_hook_directive] = STATE(115),
    [sym_timeout_hook_directive] = STATE(115),
    [sym_startup_hook_directive] = STATE(115),
    [sym_shutdown_hook_directive] = STATE(115),
    [sym_set_directive] = STATE(115),
    [sym_unset_directive] = STATE(115),
    [sym_reset_directive] = STATE(115),
    [sym_toggle_directive] = STATE(115),
    [sym_setenv_directive] = STATE(115),
    [sym_unsetenv_directive] = STATE(115),
    [sym_source_directive] = STATE(115),
    [sym__space] = STATE(313),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_account_DASHhook] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_unalias] = ACTIONS(9),
    [anon_sym_alternates] = ACTIONS(11),
    [anon_sym_unalternates] = ACTIONS(13),
    [anon_sym_alternative_order] = ACTIONS(15),
    [anon_sym_unalternative_order] = ACTIONS(17),
    [anon_sym_attachments] = ACTIONS(19),
    [anon_sym_unattachments] = ACTIONS(21),
    [anon_sym_auto_view] = ACTIONS(23),
    [anon_sym_unauto_view] = ACTIONS(25),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_unbind] = ACTIONS(29),
    [anon_sym_cd] = ACTIONS(31),
    [anon_sym_color] = ACTIONS(33),
    [anon_sym_echo] = ACTIONS(35),
    [anon_sym_exec] = ACTIONS(37),
    [anon_sym_finish] = ACTIONS(39),
    [anon_sym_group] = ACTIONS(41),
    [anon_sym_hdr_order] = ACTIONS(43),
    [anon_sym_ifdef] = ACTIONS(45),
    [anon_sym_ifndef] = ACTIONS(47),
    [anon_sym_ignore] = ACTIONS(49),
    [anon_sym_lists] = ACTIONS(51),
    [anon_sym_macro] = ACTIONS(53),
    [anon_sym_unmacro] = ACTIONS(55),
    [anon_sym_mailboxes] = ACTIONS(57),
    [anon_sym_named_DASHmailboxes] = ACTIONS(59),
    [anon_sym_unmailboxes] = ACTIONS(61),
    [anon_sym_mailto_allow] = ACTIONS(63),
    [anon_sym_mime_lookup] = ACTIONS(65),
    [anon_sym_mono] = ACTIONS(67),
    [anon_sym_my_hdr] = ACTIONS(69),
    [anon_sym_nospam] = ACTIONS(71),
    [anon_sym_push] = ACTIONS(73),
    [anon_sym_score] = ACTIONS(75),
    [anon_sym_sidebar_pin] = ACTIONS(77),
    [anon_sym_sidebar_unpin] = ACTIONS(79),
    [anon_sym_spam] = ACTIONS(81),
    [anon_sym_subjectrx] = ACTIONS(83),
    [anon_sym_subscribe] = ACTIONS(85),
    [anon_sym_uncolor] = ACTIONS(87),
    [anon_sym_ungroup] = ACTIONS(89),
    [anon_sym_unhdr_order] = ACTIONS(91),
    [anon_sym_unhook] = ACTIONS(93),
    [anon_sym_unignore] = ACTIONS(95),
    [anon_sym_unlists] = ACTIONS(97),
    [anon_sym_unmailto_allow] = ACTIONS(99),
    [anon_sym_unmime_lookup] = ACTIONS(101),
    [anon_sym_unmono] = ACTIONS(103),
    [anon_sym_unmy_hdr] = ACTIONS(105),
    [anon_sym_unscore] = ACTIONS(107),
    [anon_sym_unsubjectrx] = ACTIONS(109),
    [anon_sym_unsubscribe] = ACTIONS(111),
    [anon_sym_charset_DASHhook] = ACTIONS(113),
    [anon_sym_iconv_DASHhook] = ACTIONS(115),
    [anon_sym_crypt_DASHhook] = ACTIONS(117),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(119),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(121),
    [anon_sym_fcc_DASHhook] = ACTIONS(123),
    [anon_sym_save_DASHhook] = ACTIONS(125),
    [anon_sym_folder_DASHhook] = ACTIONS(127),
    [anon_sym_mbox_DASHhook] = ACTIONS(129),
    [anon_sym_message_DASHhook] = ACTIONS(131),
    [anon_sym_open_DASHhook] = ACTIONS(133),
    [anon_sym_close_DASHhook] = ACTIONS(135),
    [anon_sym_append_DASHhook] = ACTIONS(137),
    [anon_sym_reply_DASHhook] = ACTIONS(139),
    [anon_sym_send_DASHhook] = ACTIONS(141),
    [anon_sym_send2_DASHhook] = ACTIONS(143),
    [anon_sym_timeout_DASHhook] = ACTIONS(145),
    [anon_sym_startup_DASHhook] = ACTIONS(147),
    [anon_sym_shutdown_DASHhook] = ACTIONS(149),
    [anon_sym_set] = ACTIONS(151),
    [anon_sym_unset] = ACTIONS(153),
    [anon_sym_reset] = ACTIONS(155),
    [anon_sym_toggle] = ACTIONS(157),
    [anon_sym_setenv] = ACTIONS(159),
    [anon_sym_unsetenv] = ACTIONS(161),
    [anon_sym_source] = ACTIONS(163),
    [sym_comment] = ACTIONS(165),
    [sym__eol] = ACTIONS(424),
    [aux_sym__space_token1] = ACTIONS(169),
  },
  [4] = {
    [sym__code] = STATE(216),
    [sym_account_hook_directive] = STATE(216),
    [sym_alias_directive] = STATE(216),
    [sym_unalias_directive] = STATE(216),
    [sym_alternates_directive] = STATE(216),
    [sym_unalternates_directive] = STATE(216),
    [sym_alternative_order_directive] = STATE(216),
    [sym_unalternative_order_directive] = STATE(216),
    [sym_attachments_directive] = STATE(216),
    [sym_unattachments_directive] = STATE(216),
    [sym_auto_view_directive] = STATE(216),
    [sym_unauto_view_directive] = STATE(216),
    [sym_bind_directive] = STATE(216),
    [sym_unbind_directive] = STATE(216),
    [sym_cd_directive] = STATE(216),
    [sym_color_directive] = STATE(216),
    [sym_echo_directive] = STATE(216),
    [sym_exec_directive] = STATE(216),
    [sym_finish_directive] = STATE(216),
    [sym_group_directive] = STATE(216),
    [sym_hdr_order_directive] = STATE(216),
    [sym_ifdef_directive] = STATE(216),
    [sym_ifndef_directive] = STATE(216),
    [sym_ignore_directive] = STATE(216),
    [sym_lists_directive] = STATE(216),
    [sym_macro_directive] = STATE(216),
    [sym_unmacro_directive] = STATE(216),
    [sym_mailboxes_directive] = STATE(216),
    [sym_named_mailboxes_directive] = STATE(216),
    [sym_unmailboxes_directive] = STATE(216),
    [sym_mailto_allow_directive] = STATE(216),
    [sym_mime_lookup_directive] = STATE(216),
    [sym_mono_directive] = STATE(216),
    [sym_my_hdr_directive] = STATE(216),
    [sym_nospam_directive] = STATE(216),
    [sym_push_directive] = STATE(216),
    [sym_score_directive] = STATE(216),
    [sym_sidebar_pin_directive] = STATE(216),
    [sym_sidebar_unpin_directive] = STATE(216),
    [sym_spam_directive] = STATE(216),
    [sym_subjectrx_directive] = STATE(216),
    [sym_subscribe_directive] = STATE(216),
    [sym_uncolor_directive] = STATE(216),
    [sym_ungroup_directive] = STATE(216),
    [sym_unhdr_order_directive] = STATE(216),
    [sym_unhook_directive] = STATE(216),
    [sym_unignore_directive] = STATE(216),
    [sym_unlists_directive] = STATE(216),
    [sym_unmailto_allow_directive] = STATE(216),
    [sym_unmime_lookup_directive] = STATE(216),
    [sym_unmono_directive] = STATE(216),
    [sym_unmy_hdr_directive] = STATE(216),
    [sym_unscore_directive] = STATE(216),
    [sym_unsubjectrx_directive] = STATE(216),
    [sym_unsubscribe_directive] = STATE(216),
    [sym_charset_hook_directive] = STATE(216),
    [sym_iconv_hook_directive] = STATE(216),
    [sym_crypt_hook_directive] = STATE(216),
    [sym_index_format_hook_directive] = STATE(216),
    [sym_fcc_save_hook_directive] = STATE(216),
    [sym_fcc_hook_directive] = STATE(216),
    [sym_save_hook_directive] = STATE(216),
    [sym_folder_hook_directive] = STATE(216),
    [sym_mbox_hook_directive] = STATE(216),
    [sym_message_hook_directive] = STATE(216),
    [sym_open_hook_directive] = STATE(216),
    [sym_close_hook_directive] = STATE(216),
    [sym_append_hook_directive] = STATE(216),
    [sym_reply_hook_directive] = STATE(216),
    [sym_send_hook_directive] = STATE(216),
    [sym_send2_hook_directive] = STATE(216),
    [sym_timeout_hook_directive] = STATE(216),
    [sym_startup_hook_directive] = STATE(216),
    [sym_shutdown_hook_directive] = STATE(216),
    [sym_set_directive] = STATE(216),
    [sym_unset_directive] = STATE(216),
    [sym_reset_directive] = STATE(216),
    [sym_toggle_directive] = STATE(216),
    [sym_setenv_directive] = STATE(216),
    [sym_unsetenv_directive] = STATE(216),
    [sym_source_directive] = STATE(216),
    [anon_sym_account_DASHhook] = ACTIONS(426),
    [anon_sym_alias] = ACTIONS(428),
    [anon_sym_unalias] = ACTIONS(430),
    [anon_sym_alternates] = ACTIONS(432),
    [anon_sym_unalternates] = ACTIONS(434),
    [anon_sym_alternative_order] = ACTIONS(436),
    [anon_sym_unalternative_order] = ACTIONS(438),
    [anon_sym_attachments] = ACTIONS(440),
    [anon_sym_unattachments] = ACTIONS(442),
    [anon_sym_auto_view] = ACTIONS(444),
    [anon_sym_unauto_view] = ACTIONS(446),
    [anon_sym_bind] = ACTIONS(448),
    [anon_sym_unbind] = ACTIONS(450),
    [anon_sym_cd] = ACTIONS(452),
    [anon_sym_color] = ACTIONS(454),
    [anon_sym_echo] = ACTIONS(456),
    [anon_sym_exec] = ACTIONS(458),
    [anon_sym_finish] = ACTIONS(460),
    [anon_sym_group] = ACTIONS(462),
    [anon_sym_hdr_order] = ACTIONS(464),
    [anon_sym_ifdef] = ACTIONS(466),
    [anon_sym_ifndef] = ACTIONS(468),
    [anon_sym_ignore] = ACTIONS(470),
    [anon_sym_lists] = ACTIONS(472),
    [anon_sym_macro] = ACTIONS(474),
    [anon_sym_unmacro] = ACTIONS(476),
    [anon_sym_mailboxes] = ACTIONS(478),
    [anon_sym_named_DASHmailboxes] = ACTIONS(480),
    [anon_sym_unmailboxes] = ACTIONS(482),
    [anon_sym_mailto_allow] = ACTIONS(484),
    [anon_sym_mime_lookup] = ACTIONS(486),
    [anon_sym_mono] = ACTIONS(488),
    [anon_sym_my_hdr] = ACTIONS(490),
    [anon_sym_nospam] = ACTIONS(492),
    [anon_sym_push] = ACTIONS(494),
    [anon_sym_score] = ACTIONS(496),
    [anon_sym_sidebar_pin] = ACTIONS(498),
    [anon_sym_sidebar_unpin] = ACTIONS(500),
    [anon_sym_spam] = ACTIONS(502),
    [anon_sym_subjectrx] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(506),
    [anon_sym_uncolor] = ACTIONS(508),
    [anon_sym_ungroup] = ACTIONS(510),
    [anon_sym_unhdr_order] = ACTIONS(512),
    [anon_sym_unhook] = ACTIONS(514),
    [anon_sym_unignore] = ACTIONS(516),
    [anon_sym_unlists] = ACTIONS(518),
    [anon_sym_unmailto_allow] = ACTIONS(520),
    [anon_sym_unmime_lookup] = ACTIONS(522),
    [anon_sym_unmono] = ACTIONS(524),
    [anon_sym_unmy_hdr] = ACTIONS(526),
    [anon_sym_unscore] = ACTIONS(528),
    [anon_sym_unsubjectrx] = ACTIONS(530),
    [anon_sym_unsubscribe] = ACTIONS(532),
    [anon_sym_charset_DASHhook] = ACTIONS(534),
    [anon_sym_iconv_DASHhook] = ACTIONS(536),
    [anon_sym_crypt_DASHhook] = ACTIONS(538),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(540),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(542),
    [anon_sym_fcc_DASHhook] = ACTIONS(544),
    [anon_sym_save_DASHhook] = ACTIONS(546),
    [anon_sym_folder_DASHhook] = ACTIONS(548),
    [anon_sym_mbox_DASHhook] = ACTIONS(550),
    [anon_sym_message_DASHhook] = ACTIONS(552),
    [anon_sym_open_DASHhook] = ACTIONS(554),
    [anon_sym_close_DASHhook] = ACTIONS(556),
    [anon_sym_append_DASHhook] = ACTIONS(558),
    [anon_sym_reply_DASHhook] = ACTIONS(560),
    [anon_sym_send_DASHhook] = ACTIONS(562),
    [anon_sym_send2_DASHhook] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_set] = ACTIONS(151),
    [anon_sym_unset] = ACTIONS(153),
    [anon_sym_reset] = ACTIONS(572),
    [anon_sym_toggle] = ACTIONS(574),
    [anon_sym_setenv] = ACTIONS(576),
    [anon_sym_unsetenv] = ACTIONS(578),
    [anon_sym_source] = ACTIONS(580),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_account_DASHhook] = ACTIONS(584),
    [anon_sym_alias] = ACTIONS(584),
    [anon_sym_unalias] = ACTIONS(584),
    [anon_sym_alternates] = ACTIONS(584),
    [anon_sym_unalternates] = ACTIONS(584),
    [anon_sym_alternative_order] = ACTIONS(584),
    [anon_sym_unalternative_order] = ACTIONS(584),
    [anon_sym_attachments] = ACTIONS(584),
    [anon_sym_unattachments] = ACTIONS(584),
    [anon_sym_auto_view] = ACTIONS(584),
    [anon_sym_unauto_view] = ACTIONS(584),
    [anon_sym_bind] = ACTIONS(584),
    [anon_sym_unbind] = ACTIONS(584),
    [anon_sym_cd] = ACTIONS(584),
    [anon_sym_color] = ACTIONS(584),
    [anon_sym_echo] = ACTIONS(584),
    [anon_sym_exec] = ACTIONS(584),
    [anon_sym_finish] = ACTIONS(584),
    [anon_sym_group] = ACTIONS(584),
    [anon_sym_hdr_order] = ACTIONS(584),
    [anon_sym_ifdef] = ACTIONS(584),
    [anon_sym_ifndef] = ACTIONS(584),
    [anon_sym_ignore] = ACTIONS(584),
    [anon_sym_lists] = ACTIONS(584),
    [anon_sym_macro] = ACTIONS(584),
    [anon_sym_unmacro] = ACTIONS(584),
    [anon_sym_mailboxes] = ACTIONS(584),
    [anon_sym_named_DASHmailboxes] = ACTIONS(584),
    [anon_sym_unmailboxes] = ACTIONS(584),
    [anon_sym_mailto_allow] = ACTIONS(584),
    [anon_sym_mime_lookup] = ACTIONS(584),
    [anon_sym_mono] = ACTIONS(584),
    [anon_sym_my_hdr] = ACTIONS(584),
    [anon_sym_nospam] = ACTIONS(584),
    [anon_sym_push] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(584),
    [anon_sym_sidebar_pin] = ACTIONS(584),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_spam] = ACTIONS(584),
    [anon_sym_subjectrx] = ACTIONS(584),
    [anon_sym_subscribe] = ACTIONS(584),
    [anon_sym_uncolor] = ACTIONS(584),
    [anon_sym_ungroup] = ACTIONS(584),
    [anon_sym_unhdr_order] = ACTIONS(584),
    [anon_sym_unhook] = ACTIONS(584),
    [anon_sym_unignore] = ACTIONS(584),
    [anon_sym_unlists] = ACTIONS(584),
    [anon_sym_unmailto_allow] = ACTIONS(584),
    [anon_sym_unmime_lookup] = ACTIONS(584),
    [anon_sym_unmono] = ACTIONS(584),
    [anon_sym_unmy_hdr] = ACTIONS(584),
    [anon_sym_unscore] = ACTIONS(584),
    [anon_sym_unsubjectrx] = ACTIONS(584),
    [anon_sym_unsubscribe] = ACTIONS(584),
    [anon_sym_charset_DASHhook] = ACTIONS(584),
    [anon_sym_iconv_DASHhook] = ACTIONS(584),
    [anon_sym_crypt_DASHhook] = ACTIONS(584),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(584),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(584),
    [anon_sym_fcc_DASHhook] = ACTIONS(584),
    [anon_sym_save_DASHhook] = ACTIONS(584),
    [anon_sym_folder_DASHhook] = ACTIONS(584),
    [anon_sym_mbox_DASHhook] = ACTIONS(584),
    [anon_sym_message_DASHhook] = ACTIONS(584),
    [anon_sym_open_DASHhook] = ACTIONS(584),
    [anon_sym_close_DASHhook] = ACTIONS(584),
    [anon_sym_append_DASHhook] = ACTIONS(584),
    [anon_sym_reply_DASHhook] = ACTIONS(584),
    [anon_sym_send_DASHhook] = ACTIONS(584),
    [anon_sym_send2_DASHhook] = ACTIONS(584),
    [anon_sym_timeout_DASHhook] = ACTIONS(584),
    [anon_sym_startup_DASHhook] = ACTIONS(584),
    [anon_sym_shutdown_DASHhook] = ACTIONS(584),
    [anon_sym_set] = ACTIONS(584),
    [anon_sym_unset] = ACTIONS(584),
    [anon_sym_reset] = ACTIONS(584),
    [anon_sym_toggle] = ACTIONS(584),
    [anon_sym_setenv] = ACTIONS(584),
    [anon_sym_unsetenv] = ACTIONS(584),
    [anon_sym_source] = ACTIONS(584),
    [sym_comment] = ACTIONS(584),
    [sym__eol] = ACTIONS(584),
    [aux_sym__space_token1] = ACTIONS(584),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_account_DASHhook] = ACTIONS(586),
    [anon_sym_alias] = ACTIONS(586),
    [anon_sym_unalias] = ACTIONS(586),
    [anon_sym_alternates] = ACTIONS(586),
    [anon_sym_unalternates] = ACTIONS(586),
    [anon_sym_alternative_order] = ACTIONS(586),
    [anon_sym_unalternative_order] = ACTIONS(586),
    [anon_sym_attachments] = ACTIONS(586),
    [anon_sym_unattachments] = ACTIONS(586),
    [anon_sym_auto_view] = ACTIONS(586),
    [anon_sym_unauto_view] = ACTIONS(586),
    [anon_sym_bind] = ACTIONS(586),
    [anon_sym_unbind] = ACTIONS(586),
    [anon_sym_cd] = ACTIONS(586),
    [anon_sym_color] = ACTIONS(586),
    [anon_sym_echo] = ACTIONS(586),
    [anon_sym_exec] = ACTIONS(586),
    [anon_sym_finish] = ACTIONS(586),
    [anon_sym_group] = ACTIONS(586),
    [anon_sym_hdr_order] = ACTIONS(586),
    [anon_sym_ifdef] = ACTIONS(586),
    [anon_sym_ifndef] = ACTIONS(586),
    [anon_sym_ignore] = ACTIONS(586),
    [anon_sym_lists] = ACTIONS(586),
    [anon_sym_macro] = ACTIONS(586),
    [anon_sym_unmacro] = ACTIONS(586),
    [anon_sym_mailboxes] = ACTIONS(586),
    [anon_sym_named_DASHmailboxes] = ACTIONS(586),
    [anon_sym_unmailboxes] = ACTIONS(586),
    [anon_sym_mailto_allow] = ACTIONS(586),
    [anon_sym_mime_lookup] = ACTIONS(586),
    [anon_sym_mono] = ACTIONS(586),
    [anon_sym_my_hdr] = ACTIONS(586),
    [anon_sym_nospam] = ACTIONS(586),
    [anon_sym_push] = ACTIONS(586),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_sidebar_pin] = ACTIONS(586),
    [anon_sym_sidebar_unpin] = ACTIONS(586),
    [anon_sym_spam] = ACTIONS(586),
    [anon_sym_subjectrx] = ACTIONS(586),
    [anon_sym_subscribe] = ACTIONS(586),
    [anon_sym_uncolor] = ACTIONS(586),
    [anon_sym_ungroup] = ACTIONS(586),
    [anon_sym_unhdr_order] = ACTIONS(586),
    [anon_sym_unhook] = ACTIONS(586),
    [anon_sym_unignore] = ACTIONS(586),
    [anon_sym_unlists] = ACTIONS(586),
    [anon_sym_unmailto_allow] = ACTIONS(586),
    [anon_sym_unmime_lookup] = ACTIONS(586),
    [anon_sym_unmono] = ACTIONS(586),
    [anon_sym_unmy_hdr] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(586),
    [anon_sym_unsubjectrx] = ACTIONS(586),
    [anon_sym_unsubscribe] = ACTIONS(586),
    [anon_sym_charset_DASHhook] = ACTIONS(586),
    [anon_sym_iconv_DASHhook] = ACTIONS(586),
    [anon_sym_crypt_DASHhook] = ACTIONS(586),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(586),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(586),
    [anon_sym_fcc_DASHhook] = ACTIONS(586),
    [anon_sym_save_DASHhook] = ACTIONS(586),
    [anon_sym_folder_DASHhook] = ACTIONS(586),
    [anon_sym_mbox_DASHhook] = ACTIONS(586),
    [anon_sym_message_DASHhook] = ACTIONS(586),
    [anon_sym_open_DASHhook] = ACTIONS(586),
    [anon_sym_close_DASHhook] = ACTIONS(586),
    [anon_sym_append_DASHhook] = ACTIONS(586),
    [anon_sym_reply_DASHhook] = ACTIONS(586),
    [anon_sym_send_DASHhook] = ACTIONS(586),
    [anon_sym_send2_DASHhook] = ACTIONS(586),
    [anon_sym_timeout_DASHhook] = ACTIONS(586),
    [anon_sym_startup_DASHhook] = ACTIONS(586),
    [anon_sym_shutdown_DASHhook] = ACTIONS(586),
    [anon_sym_set] = ACTIONS(586),
    [anon_sym_unset] = ACTIONS(586),
    [anon_sym_reset] = ACTIONS(586),
    [anon_sym_toggle] = ACTIONS(586),
    [anon_sym_setenv] = ACTIONS(586),
    [anon_sym_unsetenv] = ACTIONS(586),
    [anon_sym_source] = ACTIONS(586),
    [sym_comment] = ACTIONS(586),
    [sym__eol] = ACTIONS(586),
    [aux_sym__space_token1] = ACTIONS(586),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [anon_sym_account_DASHhook] = ACTIONS(590),
    [anon_sym_alias] = ACTIONS(590),
    [anon_sym_unalias] = ACTIONS(590),
    [anon_sym_alternates] = ACTIONS(590),
    [anon_sym_unalternates] = ACTIONS(590),
    [anon_sym_alternative_order] = ACTIONS(590),
    [anon_sym_unalternative_order] = ACTIONS(590),
    [anon_sym_attachments] = ACTIONS(590),
    [anon_sym_unattachments] = ACTIONS(590),
    [anon_sym_auto_view] = ACTIONS(590),
    [anon_sym_unauto_view] = ACTIONS(590),
    [anon_sym_bind] = ACTIONS(590),
    [anon_sym_unbind] = ACTIONS(590),
    [anon_sym_cd] = ACTIONS(590),
    [anon_sym_color] = ACTIONS(590),
    [anon_sym_echo] = ACTIONS(590),
    [anon_sym_exec] = ACTIONS(590),
    [anon_sym_finish] = ACTIONS(590),
    [anon_sym_group] = ACTIONS(590),
    [anon_sym_hdr_order] = ACTIONS(590),
    [anon_sym_ifdef] = ACTIONS(590),
    [anon_sym_ifndef] = ACTIONS(590),
    [anon_sym_ignore] = ACTIONS(590),
    [anon_sym_lists] = ACTIONS(590),
    [anon_sym_macro] = ACTIONS(590),
    [anon_sym_unmacro] = ACTIONS(590),
    [anon_sym_mailboxes] = ACTIONS(590),
    [anon_sym_named_DASHmailboxes] = ACTIONS(590),
    [anon_sym_unmailboxes] = ACTIONS(590),
    [anon_sym_mailto_allow] = ACTIONS(590),
    [anon_sym_mime_lookup] = ACTIONS(590),
    [anon_sym_mono] = ACTIONS(590),
    [anon_sym_my_hdr] = ACTIONS(590),
    [anon_sym_nospam] = ACTIONS(590),
    [anon_sym_push] = ACTIONS(590),
    [anon_sym_score] = ACTIONS(590),
    [anon_sym_sidebar_pin] = ACTIONS(590),
    [anon_sym_sidebar_unpin] = ACTIONS(590),
    [anon_sym_spam] = ACTIONS(590),
    [anon_sym_subjectrx] = ACTIONS(590),
    [anon_sym_subscribe] = ACTIONS(590),
    [anon_sym_uncolor] = ACTIONS(590),
    [anon_sym_ungroup] = ACTIONS(590),
    [anon_sym_unhdr_order] = ACTIONS(590),
    [anon_sym_unhook] = ACTIONS(590),
    [anon_sym_unignore] = ACTIONS(590),
    [anon_sym_unlists] = ACTIONS(590),
    [anon_sym_unmailto_allow] = ACTIONS(590),
    [anon_sym_unmime_lookup] = ACTIONS(590),
    [anon_sym_unmono] = ACTIONS(590),
    [anon_sym_unmy_hdr] = ACTIONS(590),
    [anon_sym_unscore] = ACTIONS(590),
    [anon_sym_unsubjectrx] = ACTIONS(590),
    [anon_sym_unsubscribe] = ACTIONS(590),
    [anon_sym_charset_DASHhook] = ACTIONS(590),
    [anon_sym_iconv_DASHhook] = ACTIONS(590),
    [anon_sym_crypt_DASHhook] = ACTIONS(590),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(590),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(590),
    [anon_sym_fcc_DASHhook] = ACTIONS(590),
    [anon_sym_save_DASHhook] = ACTIONS(590),
    [anon_sym_folder_DASHhook] = ACTIONS(590),
    [anon_sym_mbox_DASHhook] = ACTIONS(590),
    [anon_sym_message_DASHhook] = ACTIONS(590),
    [anon_sym_open_DASHhook] = ACTIONS(590),
    [anon_sym_close_DASHhook] = ACTIONS(590),
    [anon_sym_append_DASHhook] = ACTIONS(590),
    [anon_sym_reply_DASHhook] = ACTIONS(590),
    [anon_sym_send_DASHhook] = ACTIONS(590),
    [anon_sym_send2_DASHhook] = ACTIONS(590),
    [anon_sym_timeout_DASHhook] = ACTIONS(590),
    [anon_sym_startup_DASHhook] = ACTIONS(590),
    [anon_sym_shutdown_DASHhook] = ACTIONS(590),
    [anon_sym_set] = ACTIONS(590),
    [anon_sym_unset] = ACTIONS(590),
    [anon_sym_reset] = ACTIONS(590),
    [anon_sym_toggle] = ACTIONS(590),
    [anon_sym_setenv] = ACTIONS(590),
    [anon_sym_unsetenv] = ACTIONS(590),
    [anon_sym_source] = ACTIONS(590),
    [sym_comment] = ACTIONS(590),
    [sym__eol] = ACTIONS(590),
    [aux_sym__space_token1] = ACTIONS(590),
  },
  [8] = {
    [anon_sym_account_DASHhook] = ACTIONS(592),
    [anon_sym_alias] = ACTIONS(592),
    [anon_sym_unalias] = ACTIONS(592),
    [anon_sym_alternates] = ACTIONS(592),
    [anon_sym_unalternates] = ACTIONS(592),
    [anon_sym_alternative_order] = ACTIONS(592),
    [anon_sym_unalternative_order] = ACTIONS(592),
    [anon_sym_attachments] = ACTIONS(592),
    [anon_sym_unattachments] = ACTIONS(592),
    [anon_sym_auto_view] = ACTIONS(592),
    [anon_sym_unauto_view] = ACTIONS(592),
    [anon_sym_bind] = ACTIONS(592),
    [anon_sym_unbind] = ACTIONS(592),
    [anon_sym_cd] = ACTIONS(592),
    [anon_sym_color] = ACTIONS(592),
    [anon_sym_echo] = ACTIONS(592),
    [anon_sym_exec] = ACTIONS(592),
    [anon_sym_finish] = ACTIONS(592),
    [anon_sym_group] = ACTIONS(592),
    [anon_sym_hdr_order] = ACTIONS(592),
    [anon_sym_ifdef] = ACTIONS(592),
    [anon_sym_ifndef] = ACTIONS(592),
    [anon_sym_ignore] = ACTIONS(592),
    [anon_sym_lists] = ACTIONS(592),
    [anon_sym_macro] = ACTIONS(592),
    [anon_sym_unmacro] = ACTIONS(592),
    [anon_sym_mailboxes] = ACTIONS(592),
    [anon_sym_named_DASHmailboxes] = ACTIONS(592),
    [anon_sym_unmailboxes] = ACTIONS(592),
    [anon_sym_mailto_allow] = ACTIONS(592),
    [anon_sym_mime_lookup] = ACTIONS(592),
    [anon_sym_mono] = ACTIONS(592),
    [anon_sym_my_hdr] = ACTIONS(592),
    [anon_sym_nospam] = ACTIONS(592),
    [anon_sym_push] = ACTIONS(592),
    [anon_sym_score] = ACTIONS(592),
    [anon_sym_sidebar_pin] = ACTIONS(592),
    [anon_sym_sidebar_unpin] = ACTIONS(592),
    [anon_sym_spam] = ACTIONS(592),
    [anon_sym_subjectrx] = ACTIONS(592),
    [anon_sym_subscribe] = ACTIONS(592),
    [anon_sym_uncolor] = ACTIONS(592),
    [anon_sym_ungroup] = ACTIONS(592),
    [anon_sym_unhdr_order] = ACTIONS(592),
    [anon_sym_unhook] = ACTIONS(592),
    [anon_sym_unignore] = ACTIONS(592),
    [anon_sym_unlists] = ACTIONS(592),
    [anon_sym_unmailto_allow] = ACTIONS(592),
    [anon_sym_unmime_lookup] = ACTIONS(592),
    [anon_sym_unmono] = ACTIONS(592),
    [anon_sym_unmy_hdr] = ACTIONS(592),
    [anon_sym_unscore] = ACTIONS(592),
    [anon_sym_unsubjectrx] = ACTIONS(592),
    [anon_sym_unsubscribe] = ACTIONS(592),
    [anon_sym_charset_DASHhook] = ACTIONS(592),
    [anon_sym_iconv_DASHhook] = ACTIONS(592),
    [anon_sym_crypt_DASHhook] = ACTIONS(592),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(592),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(592),
    [anon_sym_fcc_DASHhook] = ACTIONS(592),
    [anon_sym_save_DASHhook] = ACTIONS(592),
    [anon_sym_folder_DASHhook] = ACTIONS(592),
    [anon_sym_mbox_DASHhook] = ACTIONS(592),
    [anon_sym_message_DASHhook] = ACTIONS(592),
    [anon_sym_open_DASHhook] = ACTIONS(592),
    [anon_sym_close_DASHhook] = ACTIONS(592),
    [anon_sym_append_DASHhook] = ACTIONS(592),
    [anon_sym_reply_DASHhook] = ACTIONS(592),
    [anon_sym_send_DASHhook] = ACTIONS(592),
    [anon_sym_send2_DASHhook] = ACTIONS(592),
    [anon_sym_timeout_DASHhook] = ACTIONS(592),
    [anon_sym_startup_DASHhook] = ACTIONS(592),
    [anon_sym_shutdown_DASHhook] = ACTIONS(592),
    [anon_sym_set] = ACTIONS(594),
    [anon_sym_unset] = ACTIONS(594),
    [anon_sym_reset] = ACTIONS(592),
    [anon_sym_toggle] = ACTIONS(592),
    [anon_sym_setenv] = ACTIONS(592),
    [anon_sym_unsetenv] = ACTIONS(592),
    [anon_sym_source] = ACTIONS(592),
  },
  [9] = {
    [anon_sym_account_DASHhook] = ACTIONS(596),
    [anon_sym_alias] = ACTIONS(596),
    [anon_sym_unalias] = ACTIONS(596),
    [anon_sym_alternates] = ACTIONS(596),
    [anon_sym_unalternates] = ACTIONS(596),
    [anon_sym_alternative_order] = ACTIONS(596),
    [anon_sym_unalternative_order] = ACTIONS(596),
    [anon_sym_attachments] = ACTIONS(596),
    [anon_sym_unattachments] = ACTIONS(596),
    [anon_sym_auto_view] = ACTIONS(596),
    [anon_sym_unauto_view] = ACTIONS(596),
    [anon_sym_bind] = ACTIONS(596),
    [anon_sym_unbind] = ACTIONS(596),
    [anon_sym_cd] = ACTIONS(596),
    [anon_sym_color] = ACTIONS(596),
    [anon_sym_echo] = ACTIONS(596),
    [anon_sym_exec] = ACTIONS(596),
    [anon_sym_finish] = ACTIONS(596),
    [anon_sym_group] = ACTIONS(596),
    [anon_sym_hdr_order] = ACTIONS(596),
    [anon_sym_ifdef] = ACTIONS(596),
    [anon_sym_ifndef] = ACTIONS(596),
    [anon_sym_ignore] = ACTIONS(596),
    [anon_sym_lists] = ACTIONS(596),
    [anon_sym_macro] = ACTIONS(596),
    [anon_sym_unmacro] = ACTIONS(596),
    [anon_sym_mailboxes] = ACTIONS(596),
    [anon_sym_named_DASHmailboxes] = ACTIONS(596),
    [anon_sym_unmailboxes] = ACTIONS(596),
    [anon_sym_mailto_allow] = ACTIONS(596),
    [anon_sym_mime_lookup] = ACTIONS(596),
    [anon_sym_mono] = ACTIONS(596),
    [anon_sym_my_hdr] = ACTIONS(596),
    [anon_sym_nospam] = ACTIONS(596),
    [anon_sym_push] = ACTIONS(596),
    [anon_sym_score] = ACTIONS(596),
    [anon_sym_sidebar_pin] = ACTIONS(596),
    [anon_sym_sidebar_unpin] = ACTIONS(596),
    [anon_sym_spam] = ACTIONS(596),
    [anon_sym_subjectrx] = ACTIONS(596),
    [anon_sym_subscribe] = ACTIONS(596),
    [anon_sym_uncolor] = ACTIONS(596),
    [anon_sym_ungroup] = ACTIONS(596),
    [anon_sym_unhdr_order] = ACTIONS(596),
    [anon_sym_unhook] = ACTIONS(596),
    [anon_sym_unignore] = ACTIONS(596),
    [anon_sym_unlists] = ACTIONS(596),
    [anon_sym_unmailto_allow] = ACTIONS(596),
    [anon_sym_unmime_lookup] = ACTIONS(596),
    [anon_sym_unmono] = ACTIONS(596),
    [anon_sym_unmy_hdr] = ACTIONS(596),
    [anon_sym_unscore] = ACTIONS(596),
    [anon_sym_unsubjectrx] = ACTIONS(596),
    [anon_sym_unsubscribe] = ACTIONS(596),
    [anon_sym_charset_DASHhook] = ACTIONS(596),
    [anon_sym_iconv_DASHhook] = ACTIONS(596),
    [anon_sym_crypt_DASHhook] = ACTIONS(596),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(596),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(596),
    [anon_sym_fcc_DASHhook] = ACTIONS(596),
    [anon_sym_save_DASHhook] = ACTIONS(596),
    [anon_sym_folder_DASHhook] = ACTIONS(596),
    [anon_sym_mbox_DASHhook] = ACTIONS(596),
    [anon_sym_message_DASHhook] = ACTIONS(596),
    [anon_sym_open_DASHhook] = ACTIONS(596),
    [anon_sym_close_DASHhook] = ACTIONS(596),
    [anon_sym_append_DASHhook] = ACTIONS(596),
    [anon_sym_reply_DASHhook] = ACTIONS(596),
    [anon_sym_send_DASHhook] = ACTIONS(596),
    [anon_sym_send2_DASHhook] = ACTIONS(596),
    [anon_sym_timeout_DASHhook] = ACTIONS(596),
    [anon_sym_startup_DASHhook] = ACTIONS(596),
    [anon_sym_shutdown_DASHhook] = ACTIONS(596),
    [anon_sym_set] = ACTIONS(598),
    [anon_sym_unset] = ACTIONS(598),
    [anon_sym_reset] = ACTIONS(596),
    [anon_sym_toggle] = ACTIONS(596),
    [anon_sym_setenv] = ACTIONS(596),
    [anon_sym_unsetenv] = ACTIONS(596),
    [anon_sym_source] = ACTIONS(596),
  },
  [10] = {
    [anon_sym_account_DASHhook] = ACTIONS(600),
    [anon_sym_alias] = ACTIONS(600),
    [anon_sym_unalias] = ACTIONS(600),
    [anon_sym_alternates] = ACTIONS(600),
    [anon_sym_unalternates] = ACTIONS(600),
    [anon_sym_alternative_order] = ACTIONS(600),
    [anon_sym_unalternative_order] = ACTIONS(600),
    [anon_sym_attachments] = ACTIONS(600),
    [anon_sym_unattachments] = ACTIONS(600),
    [anon_sym_auto_view] = ACTIONS(600),
    [anon_sym_unauto_view] = ACTIONS(600),
    [anon_sym_bind] = ACTIONS(600),
    [anon_sym_unbind] = ACTIONS(600),
    [anon_sym_cd] = ACTIONS(600),
    [anon_sym_color] = ACTIONS(600),
    [anon_sym_echo] = ACTIONS(600),
    [anon_sym_exec] = ACTIONS(600),
    [anon_sym_finish] = ACTIONS(600),
    [anon_sym_group] = ACTIONS(600),
    [anon_sym_hdr_order] = ACTIONS(600),
    [anon_sym_ifdef] = ACTIONS(600),
    [anon_sym_ifndef] = ACTIONS(600),
    [anon_sym_ignore] = ACTIONS(600),
    [anon_sym_lists] = ACTIONS(600),
    [anon_sym_macro] = ACTIONS(600),
    [anon_sym_unmacro] = ACTIONS(600),
    [anon_sym_mailboxes] = ACTIONS(600),
    [anon_sym_named_DASHmailboxes] = ACTIONS(600),
    [anon_sym_unmailboxes] = ACTIONS(600),
    [anon_sym_mailto_allow] = ACTIONS(600),
    [anon_sym_mime_lookup] = ACTIONS(600),
    [anon_sym_mono] = ACTIONS(600),
    [anon_sym_my_hdr] = ACTIONS(600),
    [anon_sym_nospam] = ACTIONS(600),
    [anon_sym_push] = ACTIONS(600),
    [anon_sym_score] = ACTIONS(600),
    [anon_sym_sidebar_pin] = ACTIONS(600),
    [anon_sym_sidebar_unpin] = ACTIONS(600),
    [anon_sym_spam] = ACTIONS(600),
    [anon_sym_subjectrx] = ACTIONS(600),
    [anon_sym_subscribe] = ACTIONS(600),
    [anon_sym_uncolor] = ACTIONS(600),
    [anon_sym_ungroup] = ACTIONS(600),
    [anon_sym_unhdr_order] = ACTIONS(600),
    [anon_sym_unhook] = ACTIONS(600),
    [anon_sym_unignore] = ACTIONS(600),
    [anon_sym_unlists] = ACTIONS(600),
    [anon_sym_unmailto_allow] = ACTIONS(600),
    [anon_sym_unmime_lookup] = ACTIONS(600),
    [anon_sym_unmono] = ACTIONS(600),
    [anon_sym_unmy_hdr] = ACTIONS(600),
    [anon_sym_unscore] = ACTIONS(600),
    [anon_sym_unsubjectrx] = ACTIONS(600),
    [anon_sym_unsubscribe] = ACTIONS(600),
    [anon_sym_charset_DASHhook] = ACTIONS(600),
    [anon_sym_iconv_DASHhook] = ACTIONS(600),
    [anon_sym_crypt_DASHhook] = ACTIONS(600),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(600),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(600),
    [anon_sym_fcc_DASHhook] = ACTIONS(600),
    [anon_sym_save_DASHhook] = ACTIONS(600),
    [anon_sym_folder_DASHhook] = ACTIONS(600),
    [anon_sym_mbox_DASHhook] = ACTIONS(600),
    [anon_sym_message_DASHhook] = ACTIONS(600),
    [anon_sym_open_DASHhook] = ACTIONS(600),
    [anon_sym_close_DASHhook] = ACTIONS(600),
    [anon_sym_append_DASHhook] = ACTIONS(600),
    [anon_sym_reply_DASHhook] = ACTIONS(600),
    [anon_sym_send_DASHhook] = ACTIONS(600),
    [anon_sym_send2_DASHhook] = ACTIONS(600),
    [anon_sym_timeout_DASHhook] = ACTIONS(600),
    [anon_sym_startup_DASHhook] = ACTIONS(600),
    [anon_sym_shutdown_DASHhook] = ACTIONS(600),
    [anon_sym_set] = ACTIONS(602),
    [anon_sym_unset] = ACTIONS(602),
    [anon_sym_reset] = ACTIONS(600),
    [anon_sym_toggle] = ACTIONS(600),
    [anon_sym_setenv] = ACTIONS(600),
    [anon_sym_unsetenv] = ACTIONS(600),
    [anon_sym_source] = ACTIONS(600),
  },
  [11] = {
    [anon_sym_account_DASHhook] = ACTIONS(604),
    [anon_sym_alias] = ACTIONS(604),
    [anon_sym_unalias] = ACTIONS(604),
    [anon_sym_alternates] = ACTIONS(604),
    [anon_sym_unalternates] = ACTIONS(604),
    [anon_sym_alternative_order] = ACTIONS(604),
    [anon_sym_unalternative_order] = ACTIONS(604),
    [anon_sym_attachments] = ACTIONS(604),
    [anon_sym_unattachments] = ACTIONS(604),
    [anon_sym_auto_view] = ACTIONS(604),
    [anon_sym_unauto_view] = ACTIONS(604),
    [anon_sym_bind] = ACTIONS(604),
    [anon_sym_unbind] = ACTIONS(604),
    [anon_sym_cd] = ACTIONS(604),
    [anon_sym_color] = ACTIONS(604),
    [anon_sym_echo] = ACTIONS(604),
    [anon_sym_exec] = ACTIONS(604),
    [anon_sym_finish] = ACTIONS(604),
    [anon_sym_group] = ACTIONS(604),
    [anon_sym_hdr_order] = ACTIONS(604),
    [anon_sym_ifdef] = ACTIONS(604),
    [anon_sym_ifndef] = ACTIONS(604),
    [anon_sym_ignore] = ACTIONS(604),
    [anon_sym_lists] = ACTIONS(604),
    [anon_sym_macro] = ACTIONS(604),
    [anon_sym_unmacro] = ACTIONS(604),
    [anon_sym_mailboxes] = ACTIONS(604),
    [anon_sym_named_DASHmailboxes] = ACTIONS(604),
    [anon_sym_unmailboxes] = ACTIONS(604),
    [anon_sym_mailto_allow] = ACTIONS(604),
    [anon_sym_mime_lookup] = ACTIONS(604),
    [anon_sym_mono] = ACTIONS(604),
    [anon_sym_my_hdr] = ACTIONS(604),
    [anon_sym_nospam] = ACTIONS(604),
    [anon_sym_push] = ACTIONS(604),
    [anon_sym_score] = ACTIONS(604),
    [anon_sym_sidebar_pin] = ACTIONS(604),
    [anon_sym_sidebar_unpin] = ACTIONS(604),
    [anon_sym_spam] = ACTIONS(604),
    [anon_sym_subjectrx] = ACTIONS(604),
    [anon_sym_subscribe] = ACTIONS(604),
    [anon_sym_uncolor] = ACTIONS(604),
    [anon_sym_ungroup] = ACTIONS(604),
    [anon_sym_unhdr_order] = ACTIONS(604),
    [anon_sym_unhook] = ACTIONS(604),
    [anon_sym_unignore] = ACTIONS(604),
    [anon_sym_unlists] = ACTIONS(604),
    [anon_sym_unmailto_allow] = ACTIONS(604),
    [anon_sym_unmime_lookup] = ACTIONS(604),
    [anon_sym_unmono] = ACTIONS(604),
    [anon_sym_unmy_hdr] = ACTIONS(604),
    [anon_sym_unscore] = ACTIONS(604),
    [anon_sym_unsubjectrx] = ACTIONS(604),
    [anon_sym_unsubscribe] = ACTIONS(604),
    [anon_sym_charset_DASHhook] = ACTIONS(604),
    [anon_sym_iconv_DASHhook] = ACTIONS(604),
    [anon_sym_crypt_DASHhook] = ACTIONS(604),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(604),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(604),
    [anon_sym_fcc_DASHhook] = ACTIONS(604),
    [anon_sym_save_DASHhook] = ACTIONS(604),
    [anon_sym_folder_DASHhook] = ACTIONS(604),
    [anon_sym_mbox_DASHhook] = ACTIONS(604),
    [anon_sym_message_DASHhook] = ACTIONS(604),
    [anon_sym_open_DASHhook] = ACTIONS(604),
    [anon_sym_close_DASHhook] = ACTIONS(604),
    [anon_sym_append_DASHhook] = ACTIONS(604),
    [anon_sym_reply_DASHhook] = ACTIONS(604),
    [anon_sym_send_DASHhook] = ACTIONS(604),
    [anon_sym_send2_DASHhook] = ACTIONS(604),
    [anon_sym_timeout_DASHhook] = ACTIONS(604),
    [anon_sym_startup_DASHhook] = ACTIONS(604),
    [anon_sym_shutdown_DASHhook] = ACTIONS(604),
    [anon_sym_set] = ACTIONS(606),
    [anon_sym_unset] = ACTIONS(606),
    [anon_sym_reset] = ACTIONS(604),
    [anon_sym_toggle] = ACTIONS(604),
    [anon_sym_setenv] = ACTIONS(604),
    [anon_sym_unsetenv] = ACTIONS(604),
    [anon_sym_source] = ACTIONS(604),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(608), 1,
      anon_sym_,
    ACTIONS(612), 1,
      sym__int,
    ACTIONS(614), 1,
      anon_sym_DOT,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
    ACTIONS(610), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
    STATE(295), 4,
      sym_quadoption,
      sym_int,
      sym_float,
      sym__string,
  [44] = 12,
    ACTIONS(612), 1,
      sym__int,
    ACTIONS(614), 1,
      anon_sym_DOT,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    ACTIONS(626), 1,
      anon_sym_,
    STATE(176), 1,
      sym__quoted_string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
    ACTIONS(610), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
    STATE(283), 4,
      sym_quadoption,
      sym_int,
      sym_float,
      sym__string,
  [88] = 11,
    ACTIONS(612), 1,
      sym__int,
    ACTIONS(614), 1,
      anon_sym_DOT,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
    ACTIONS(610), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
    STATE(295), 4,
      sym_quadoption,
      sym_int,
      sym_float,
      sym__string,
  [129] = 11,
    ACTIONS(612), 1,
      sym__int,
    ACTIONS(614), 1,
      anon_sym_DOT,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
    ACTIONS(610), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
    STATE(299), 4,
      sym_quadoption,
      sym_int,
      sym_float,
      sym__string,
  [170] = 4,
    ACTIONS(630), 1,
      anon_sym_STAR,
    STATE(128), 1,
      sym__maps,
    STATE(165), 1,
      sym_map,
    ACTIONS(628), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [195] = 4,
    ACTIONS(632), 1,
      anon_sym_STAR,
    STATE(136), 1,
      sym__maps,
    STATE(165), 1,
      sym_map,
    ACTIONS(628), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [220] = 3,
    STATE(164), 1,
      sym__maps,
    STATE(165), 1,
      sym_map,
    ACTIONS(628), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [242] = 3,
    STATE(135), 1,
      sym__maps,
    STATE(165), 1,
      sym_map,
    ACTIONS(628), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [264] = 2,
    STATE(197), 1,
      sym_map,
    ACTIONS(628), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [283] = 13,
    ACTIONS(634), 1,
      anon_sym_DASHgroup,
    ACTIONS(636), 1,
      anon_sym_STAR,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(25), 1,
      sym__group,
    STATE(151), 1,
      sym_regex,
    STATE(183), 1,
      sym__quoted_string,
    STATE(202), 1,
      sym__string,
    STATE(253), 1,
      sym__regexes,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [324] = 12,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    ACTIONS(648), 1,
      anon_sym_DASHgroup,
    STATE(27), 1,
      sym__group,
    STATE(151), 1,
      sym_regex,
    STATE(183), 1,
      sym__quoted_string,
    STATE(202), 1,
      sym__string,
    STATE(254), 1,
      sym__regexes,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [362] = 11,
    ACTIONS(650), 1,
      anon_sym_STAR,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      anon_sym_BQUOTE,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(310), 1,
      sym_disposition,
    STATE(334), 1,
      sym__string,
    STATE(340), 1,
      sym__quoted_string,
    ACTIONS(652), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(347), 2,
      sym_back_quoted_string,
      sym_string,
  [398] = 11,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      anon_sym_BQUOTE,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym__word,
    ACTIONS(666), 1,
      anon_sym_QMARK,
    STATE(315), 1,
      sym_disposition,
    STATE(334), 1,
      sym__string,
    STATE(340), 1,
      sym__quoted_string,
    ACTIONS(664), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(347), 2,
      sym_back_quoted_string,
      sym_string,
  [434] = 11,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    ACTIONS(668), 1,
      anon_sym_STAR,
    STATE(151), 1,
      sym_regex,
    STATE(183), 1,
      sym__quoted_string,
    STATE(202), 1,
      sym__string,
    STATE(226), 1,
      sym__regexes,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [469] = 11,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    ACTIONS(670), 1,
      anon_sym_STAR,
    STATE(137), 1,
      sym_mailbox,
    STATE(183), 1,
      sym__quoted_string,
    STATE(191), 1,
      sym__string,
    STATE(284), 1,
      sym__mailboxes,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [504] = 10,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(151), 1,
      sym_regex,
    STATE(183), 1,
      sym__quoted_string,
    STATE(202), 1,
      sym__string,
    STATE(224), 1,
      sym__regexes,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [536] = 10,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(161), 1,
      sym_address,
    STATE(176), 1,
      sym__quoted_string,
    STATE(203), 1,
      sym__string,
    STATE(221), 1,
      sym__addresses,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [568] = 10,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(161), 1,
      sym_address,
    STATE(176), 1,
      sym__quoted_string,
    STATE(203), 1,
      sym__string,
    STATE(256), 1,
      sym__addresses,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [600] = 10,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(137), 1,
      sym_mailbox,
    STATE(183), 1,
      sym__quoted_string,
    STATE(191), 1,
      sym__string,
    STATE(292), 1,
      sym__mailboxes,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [632] = 9,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    ACTIONS(680), 1,
      sym__word,
    STATE(47), 1,
      sym_description,
    STATE(126), 1,
      sym__quoted_string,
    STATE(141), 1,
      sym__string,
    STATE(127), 2,
      sym_back_quoted_string,
      sym_string,
  [661] = 9,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    ACTIONS(680), 1,
      sym__word,
    STATE(33), 1,
      sym_regex,
    STATE(126), 1,
      sym__quoted_string,
    STATE(133), 1,
      sym__string,
    STATE(127), 2,
      sym_back_quoted_string,
      sym_string,
  [690] = 9,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(242), 1,
      sym_shell_command,
    STATE(243), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [719] = 9,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(243), 1,
      sym__string,
    STATE(244), 1,
      sym_shell_command,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [748] = 9,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(243), 1,
      sym__string,
    STATE(245), 1,
      sym_shell_command,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [777] = 9,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      anon_sym_BQUOTE,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(318), 1,
      sym_disposition,
    STATE(334), 1,
      sym__string,
    STATE(340), 1,
      sym__quoted_string,
    STATE(347), 2,
      sym_back_quoted_string,
      sym_string,
  [806] = 9,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      anon_sym_BQUOTE,
    ACTIONS(686), 1,
      anon_sym_SQUOTE,
    ACTIONS(688), 1,
      anon_sym_DQUOTE,
    ACTIONS(690), 1,
      sym__word,
    STATE(117), 1,
      sym_group_name,
    STATE(118), 1,
      sym__string,
    STATE(120), 1,
      sym__quoted_string,
    STATE(119), 2,
      sym_back_quoted_string,
      sym_string,
  [835] = 9,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    ACTIONS(680), 1,
      sym__word,
    STATE(126), 1,
      sym__quoted_string,
    STATE(130), 1,
      sym__string,
    STATE(131), 1,
      sym_group_name,
    STATE(127), 2,
      sym_back_quoted_string,
      sym_string,
  [864] = 9,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      anon_sym_BQUOTE,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(317), 1,
      sym_disposition,
    STATE(334), 1,
      sym__string,
    STATE(340), 1,
      sym__quoted_string,
    STATE(347), 2,
      sym_back_quoted_string,
      sym_string,
  [893] = 9,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(183), 1,
      sym__quoted_string,
    STATE(201), 1,
      sym_regex,
    STATE(202), 1,
      sym__string,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [922] = 9,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(694), 1,
      anon_sym_BQUOTE,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    ACTIONS(700), 1,
      sym__word,
    STATE(173), 1,
      sym__quoted_string,
    STATE(181), 1,
      sym__string,
    STATE(182), 1,
      sym_group_name,
    STATE(174), 2,
      sym_back_quoted_string,
      sym_string,
  [951] = 9,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(268), 1,
      sym_sequence,
    STATE(269), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [980] = 9,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(183), 1,
      sym__quoted_string,
    STATE(191), 1,
      sym__string,
    STATE(196), 1,
      sym_mailbox,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [1009] = 9,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(192), 1,
      sym_address,
    STATE(203), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1038] = 9,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    ACTIONS(680), 1,
      sym__word,
    STATE(48), 1,
      sym_description,
    STATE(126), 1,
      sym__quoted_string,
    STATE(141), 1,
      sym__string,
    STATE(127), 2,
      sym_back_quoted_string,
      sym_string,
  [1067] = 9,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_BQUOTE,
    ACTIONS(706), 1,
      anon_sym_SQUOTE,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    ACTIONS(710), 1,
      sym__word,
    STATE(217), 1,
      sym_group_name,
    STATE(218), 1,
      sym__string,
    STATE(228), 1,
      sym__quoted_string,
    STATE(229), 2,
      sym_back_quoted_string,
      sym_string,
  [1096] = 9,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(156), 1,
      sym_mailbox,
    STATE(183), 1,
      sym__quoted_string,
    STATE(191), 1,
      sym__string,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [1125] = 9,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      anon_sym_BQUOTE,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      sym__word,
    STATE(183), 1,
      sym__quoted_string,
    STATE(186), 1,
      sym_mailbox,
    STATE(191), 1,
      sym__string,
    STATE(184), 2,
      sym_back_quoted_string,
      sym_string,
  [1154] = 9,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    ACTIONS(680), 1,
      sym__word,
    STATE(34), 1,
      sym_regex,
    STATE(126), 1,
      sym__quoted_string,
    STATE(133), 1,
      sym__string,
    STATE(127), 2,
      sym_back_quoted_string,
      sym_string,
  [1183] = 9,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    ACTIONS(680), 1,
      sym__word,
    STATE(35), 1,
      sym_regex,
    STATE(126), 1,
      sym__quoted_string,
    STATE(133), 1,
      sym__string,
    STATE(127), 2,
      sym_back_quoted_string,
      sym_string,
  [1212] = 4,
    ACTIONS(712), 1,
      anon_sym_LT,
    STATE(82), 1,
      aux_sym_key_repeat1,
    ACTIONS(714), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(716), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [1230] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(275), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1256] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(206), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1282] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(211), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1308] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(213), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1334] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(214), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1360] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(215), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1386] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(219), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1412] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(220), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1438] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(277), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1464] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(279), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1490] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(282), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1516] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(288), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1542] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(307), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1568] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(308), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1594] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(306), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1620] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(305), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1646] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(302), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1672] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(301), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1698] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(298), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1724] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(296), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1750] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(294), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1776] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(293), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1802] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(289), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1828] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(271), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1854] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(266), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1880] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(263), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1906] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(260), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1932] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(259), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1958] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(258), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [1984] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(208), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2010] = 4,
    ACTIONS(718), 1,
      anon_sym_LT,
    STATE(82), 1,
      aux_sym_key_repeat1,
    ACTIONS(721), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(724), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2028] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(255), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2054] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(251), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2080] = 8,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 1,
      anon_sym_BQUOTE,
    ACTIONS(730), 1,
      anon_sym_SQUOTE,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      sym__word,
    STATE(4), 1,
      sym__string,
    STATE(10), 1,
      sym__quoted_string,
    STATE(9), 2,
      sym_back_quoted_string,
      sym_string,
  [2106] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(265), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2132] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(272), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2158] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(280), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2184] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(304), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2210] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(303), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2236] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(297), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2262] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(291), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2288] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(290), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2314] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(239), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2340] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(240), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2366] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(241), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2392] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(276), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2418] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(273), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2444] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(249), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2470] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(248), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2496] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(262), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2522] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(250), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2548] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(235), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2574] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(231), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2600] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(234), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2626] = 8,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(624), 1,
      sym__word,
    STATE(176), 1,
      sym__quoted_string,
    STATE(246), 1,
      sym__string,
    STATE(177), 2,
      sym_back_quoted_string,
      sym_string,
  [2652] = 1,
    ACTIONS(736), 8,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2663] = 7,
    ACTIONS(738), 1,
      anon_sym_DASHgroup,
    ACTIONS(740), 1,
      anon_sym_STAR,
    ACTIONS(742), 1,
      anon_sym_LT,
    STATE(109), 1,
      aux_sym_key_repeat1,
    STATE(114), 1,
      sym__group,
    STATE(257), 1,
      sym_key,
    ACTIONS(744), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2686] = 4,
    ACTIONS(742), 1,
      anon_sym_LT,
    STATE(110), 1,
      aux_sym_key_repeat1,
    ACTIONS(746), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(716), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2702] = 4,
    ACTIONS(748), 1,
      anon_sym_LT,
    STATE(110), 1,
      aux_sym_key_repeat1,
    ACTIONS(751), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(724), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2718] = 6,
    ACTIONS(712), 1,
      anon_sym_LT,
    ACTIONS(754), 1,
      anon_sym_DASHgroup,
    STATE(28), 1,
      sym_key,
    STATE(51), 1,
      aux_sym_key_repeat1,
    STATE(144), 1,
      sym__group,
    ACTIONS(756), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2738] = 5,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 1,
      anon_sym_QMARK,
    ACTIONS(762), 1,
      anon_sym_EQ,
    STATE(153), 1,
      aux_sym__options2_repeat1,
    ACTIONS(764), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2756] = 1,
    ACTIONS(606), 6,
      anon_sym_STAR,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2765] = 5,
    ACTIONS(742), 1,
      anon_sym_LT,
    ACTIONS(766), 1,
      anon_sym_STAR,
    STATE(109), 1,
      aux_sym_key_repeat1,
    STATE(223), 1,
      sym_key,
    ACTIONS(744), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2782] = 6,
    ACTIONS(165), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym__space_token1,
    ACTIONS(768), 1,
      sym__eol,
    STATE(6), 1,
      sym__end,
    STATE(188), 1,
      aux_sym__space_repeat1,
    STATE(313), 1,
      sym__space,
  [2801] = 1,
    ACTIONS(736), 6,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2810] = 1,
    ACTIONS(770), 6,
      anon_sym_STAR,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2819] = 1,
    ACTIONS(772), 6,
      anon_sym_STAR,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2828] = 1,
    ACTIONS(598), 6,
      anon_sym_STAR,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2837] = 1,
    ACTIONS(602), 6,
      anon_sym_STAR,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2846] = 1,
    ACTIONS(594), 6,
      anon_sym_STAR,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2855] = 3,
    ACTIONS(774), 1,
      anon_sym_,
    STATE(122), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(777), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2867] = 3,
    ACTIONS(779), 1,
      anon_sym_,
    STATE(152), 1,
      aux_sym__options_repeat1,
    ACTIONS(781), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2879] = 1,
    ACTIONS(606), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2887] = 1,
    ACTIONS(594), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2895] = 1,
    ACTIONS(602), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2903] = 1,
    ACTIONS(598), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2911] = 4,
    ACTIONS(742), 1,
      anon_sym_LT,
    STATE(109), 1,
      aux_sym_key_repeat1,
    STATE(236), 1,
      sym_key,
    ACTIONS(744), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2925] = 4,
    ACTIONS(724), 1,
      sym_function,
    ACTIONS(783), 1,
      anon_sym_LT,
    STATE(129), 1,
      aux_sym_key_repeat1,
    ACTIONS(786), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2939] = 1,
    ACTIONS(772), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2947] = 1,
    ACTIONS(770), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2955] = 4,
    ACTIONS(716), 1,
      sym_function,
    ACTIONS(789), 1,
      anon_sym_LT,
    STATE(129), 1,
      aux_sym_key_repeat1,
    ACTIONS(791), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2969] = 1,
    ACTIONS(793), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [2977] = 3,
    ACTIONS(795), 1,
      anon_sym_,
    STATE(134), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(798), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2989] = 4,
    ACTIONS(712), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_key,
    STATE(51), 1,
      aux_sym_key_repeat1,
    ACTIONS(756), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3003] = 4,
    ACTIONS(742), 1,
      anon_sym_LT,
    STATE(109), 1,
      aux_sym_key_repeat1,
    STATE(238), 1,
      sym_key,
    ACTIONS(744), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3017] = 3,
    ACTIONS(800), 1,
      anon_sym_,
    STATE(157), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(802), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3029] = 3,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(807), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3041] = 3,
    ACTIONS(809), 1,
      anon_sym_,
    STATE(139), 1,
      aux_sym__options_repeat1,
    ACTIONS(812), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3053] = 3,
    ACTIONS(814), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym__options2_repeat1,
    ACTIONS(817), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3065] = 1,
    ACTIONS(819), 5,
      anon_sym_LF,
      anon_sym_BQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__word,
  [3073] = 3,
    ACTIONS(821), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym__options2_repeat1,
    ACTIONS(823), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3085] = 3,
    ACTIONS(825), 1,
      anon_sym_,
    STATE(134), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(827), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3097] = 4,
    ACTIONS(712), 1,
      anon_sym_LT,
    STATE(29), 1,
      sym_key,
    STATE(51), 1,
      aux_sym_key_repeat1,
    ACTIONS(756), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3111] = 3,
    ACTIONS(829), 1,
      anon_sym_,
    STATE(145), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(832), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3123] = 3,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__maps_repeat1,
    ACTIONS(837), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3135] = 3,
    ACTIONS(839), 1,
      anon_sym_,
    STATE(122), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(841), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3147] = 3,
    ACTIONS(843), 1,
      anon_sym_,
    STATE(148), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(846), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3159] = 3,
    ACTIONS(848), 1,
      anon_sym_,
    STATE(149), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(851), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3171] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(855), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3183] = 3,
    ACTIONS(857), 1,
      anon_sym_,
    STATE(160), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(859), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3195] = 3,
    ACTIONS(779), 1,
      anon_sym_,
    STATE(139), 1,
      aux_sym__options_repeat1,
    ACTIONS(861), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3207] = 3,
    ACTIONS(821), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym__options2_repeat1,
    ACTIONS(863), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3219] = 2,
    ACTIONS(867), 1,
      anon_sym_SLASH,
    ACTIONS(865), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3229] = 3,
    ACTIONS(821), 1,
      anon_sym_,
    STATE(142), 1,
      aux_sym__options2_repeat1,
    ACTIONS(863), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3241] = 3,
    ACTIONS(825), 1,
      anon_sym_,
    STATE(143), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(869), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3253] = 3,
    ACTIONS(800), 1,
      anon_sym_,
    STATE(145), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(871), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3265] = 3,
    ACTIONS(873), 1,
      anon_sym_,
    STATE(163), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(875), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3277] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__maps_repeat1,
    ACTIONS(879), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3289] = 3,
    ACTIONS(857), 1,
      anon_sym_,
    STATE(149), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(881), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3301] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(883), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3313] = 3,
    ACTIONS(839), 1,
      anon_sym_,
    STATE(147), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(885), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3325] = 3,
    ACTIONS(873), 1,
      anon_sym_,
    STATE(148), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(887), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3337] = 4,
    ACTIONS(789), 1,
      anon_sym_LT,
    STATE(132), 1,
      aux_sym_key_repeat1,
    STATE(328), 1,
      sym_key,
    ACTIONS(889), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3351] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__maps_repeat1,
    ACTIONS(891), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3363] = 1,
    ACTIONS(606), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3370] = 3,
    ACTIONS(895), 1,
      anon_sym_EQ,
    ACTIONS(897), 1,
      sym_option,
    ACTIONS(893), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [3381] = 4,
    ACTIONS(899), 1,
      anon_sym_STAR,
    ACTIONS(901), 1,
      sym_mime_type,
    STATE(158), 1,
      sym_mime,
    STATE(286), 1,
      sym__mimes,
  [3394] = 4,
    ACTIONS(901), 1,
      sym_mime_type,
    ACTIONS(903), 1,
      anon_sym_STAR,
    STATE(158), 1,
      sym_mime,
    STATE(287), 1,
      sym__mimes,
  [3407] = 3,
    ACTIONS(907), 1,
      sym_option,
    STATE(285), 1,
      sym__options2,
    ACTIONS(905), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [3418] = 1,
    ACTIONS(606), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3425] = 1,
    ACTIONS(594), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3432] = 1,
    ACTIONS(602), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3439] = 1,
    ACTIONS(598), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3446] = 1,
    ACTIONS(594), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3453] = 1,
    ACTIONS(602), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3460] = 1,
    ACTIONS(598), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3467] = 1,
    ACTIONS(736), 4,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_function,
  [3474] = 1,
    ACTIONS(606), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3481] = 1,
    ACTIONS(594), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3488] = 1,
    ACTIONS(772), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3495] = 1,
    ACTIONS(770), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3502] = 1,
    ACTIONS(602), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3509] = 1,
    ACTIONS(598), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3516] = 1,
    ACTIONS(909), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3523] = 1,
    ACTIONS(911), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3530] = 2,
    ACTIONS(913), 1,
      sym__int,
    ACTIONS(915), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3539] = 3,
    ACTIONS(919), 1,
      aux_sym__space_token1,
    STATE(199), 1,
      aux_sym__space_repeat1,
    ACTIONS(917), 2,
      sym_comment,
      sym__eol,
  [3550] = 1,
    ACTIONS(921), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3557] = 1,
    ACTIONS(777), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3564] = 1,
    ACTIONS(923), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3571] = 1,
    ACTIONS(807), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3578] = 1,
    ACTIONS(812), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3585] = 2,
    ACTIONS(925), 1,
      anon_sym_DOT,
    ACTIONS(927), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3594] = 1,
    ACTIONS(817), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3601] = 1,
    ACTIONS(832), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3608] = 1,
    ACTIONS(837), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3615] = 1,
    ACTIONS(846), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3622] = 3,
    ACTIONS(931), 1,
      aux_sym__space_token1,
    STATE(199), 1,
      aux_sym__space_repeat1,
    ACTIONS(929), 2,
      sym_comment,
      sym__eol,
  [3633] = 1,
    ACTIONS(934), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3640] = 1,
    ACTIONS(851), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3647] = 1,
    ACTIONS(793), 4,
      anon_sym_,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3654] = 1,
    ACTIONS(936), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3661] = 1,
    ACTIONS(938), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3667] = 1,
    ACTIONS(915), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3673] = 1,
    ACTIONS(940), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3679] = 1,
    ACTIONS(942), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3685] = 1,
    ACTIONS(944), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3691] = 1,
    ACTIONS(946), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3697] = 3,
    ACTIONS(901), 1,
      sym_mime_type,
    STATE(158), 1,
      sym_mime,
    STATE(209), 1,
      sym__mimes,
  [3707] = 1,
    ACTIONS(948), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3713] = 1,
    ACTIONS(950), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3719] = 1,
    ACTIONS(952), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3725] = 1,
    ACTIONS(954), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3731] = 1,
    ACTIONS(956), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3737] = 1,
    ACTIONS(958), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3743] = 1,
    ACTIONS(770), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3749] = 1,
    ACTIONS(772), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3755] = 1,
    ACTIONS(960), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3761] = 1,
    ACTIONS(962), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3767] = 1,
    ACTIONS(964), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3773] = 1,
    ACTIONS(606), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3779] = 1,
    ACTIONS(966), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3785] = 1,
    ACTIONS(968), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3791] = 1,
    ACTIONS(970), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3797] = 1,
    ACTIONS(972), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3803] = 1,
    ACTIONS(594), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3809] = 1,
    ACTIONS(602), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3815] = 1,
    ACTIONS(598), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3821] = 1,
    ACTIONS(974), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3827] = 1,
    ACTIONS(976), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3833] = 1,
    ACTIONS(978), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3839] = 3,
    ACTIONS(901), 1,
      sym_mime_type,
    STATE(158), 1,
      sym_mime,
    STATE(237), 1,
      sym__mimes,
  [3849] = 1,
    ACTIONS(980), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3855] = 1,
    ACTIONS(982), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3861] = 1,
    ACTIONS(984), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3867] = 1,
    ACTIONS(986), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3873] = 1,
    ACTIONS(988), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3879] = 1,
    ACTIONS(990), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3885] = 1,
    ACTIONS(992), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3891] = 1,
    ACTIONS(994), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3897] = 1,
    ACTIONS(996), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3903] = 1,
    ACTIONS(998), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3909] = 1,
    ACTIONS(1000), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3915] = 1,
    ACTIONS(1002), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3921] = 1,
    ACTIONS(1004), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3927] = 1,
    ACTIONS(1006), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3933] = 1,
    ACTIONS(1008), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3939] = 1,
    ACTIONS(1010), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3945] = 1,
    ACTIONS(1012), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3951] = 1,
    ACTIONS(1014), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3957] = 1,
    ACTIONS(1016), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3963] = 1,
    ACTIONS(1018), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3969] = 1,
    ACTIONS(1020), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3975] = 1,
    ACTIONS(1022), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3981] = 1,
    ACTIONS(1024), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3987] = 1,
    ACTIONS(1026), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3993] = 1,
    ACTIONS(1028), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3999] = 1,
    ACTIONS(1030), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4005] = 1,
    ACTIONS(1032), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4011] = 1,
    ACTIONS(1034), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4017] = 1,
    ACTIONS(1036), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4023] = 1,
    ACTIONS(1038), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4029] = 1,
    ACTIONS(1040), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4035] = 1,
    ACTIONS(1042), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4041] = 1,
    ACTIONS(1044), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4047] = 1,
    ACTIONS(1046), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4053] = 1,
    ACTIONS(1048), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4059] = 1,
    ACTIONS(1050), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4065] = 1,
    ACTIONS(1052), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4071] = 1,
    ACTIONS(1054), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4077] = 1,
    ACTIONS(1056), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4083] = 1,
    ACTIONS(1058), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4089] = 2,
    ACTIONS(897), 1,
      sym_option,
    ACTIONS(893), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [4097] = 1,
    ACTIONS(1060), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4103] = 1,
    ACTIONS(1062), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4109] = 1,
    ACTIONS(1064), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4115] = 1,
    ACTIONS(1066), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4121] = 1,
    ACTIONS(1068), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4127] = 1,
    ACTIONS(1070), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4133] = 1,
    ACTIONS(1072), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4139] = 1,
    ACTIONS(1074), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4145] = 1,
    ACTIONS(1076), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4151] = 1,
    ACTIONS(1078), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4157] = 1,
    ACTIONS(1080), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4163] = 1,
    ACTIONS(1082), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4169] = 1,
    ACTIONS(1084), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4175] = 1,
    ACTIONS(1086), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4181] = 1,
    ACTIONS(1088), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4187] = 1,
    ACTIONS(1090), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4193] = 1,
    ACTIONS(1092), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4199] = 1,
    ACTIONS(1094), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4205] = 1,
    ACTIONS(1096), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4211] = 1,
    ACTIONS(1098), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4217] = 1,
    ACTIONS(1100), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4223] = 1,
    ACTIONS(1102), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4229] = 1,
    ACTIONS(1104), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4235] = 1,
    ACTIONS(1106), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4241] = 1,
    ACTIONS(1108), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4247] = 1,
    ACTIONS(1110), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4253] = 1,
    ACTIONS(1112), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4259] = 1,
    ACTIONS(1114), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4265] = 1,
    ACTIONS(1116), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4271] = 1,
    ACTIONS(1118), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4277] = 1,
    ACTIONS(1120), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4283] = 1,
    ACTIONS(1122), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4289] = 1,
    ACTIONS(1124), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4295] = 1,
    ACTIONS(1126), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4301] = 2,
    ACTIONS(1128), 1,
      anon_sym_QMARK,
    ACTIONS(1130), 1,
      sym_option,
  [4308] = 2,
    ACTIONS(1132), 1,
      sym_mime_type,
    STATE(232), 1,
      sym__mime_types,
  [4315] = 2,
    ACTIONS(1134), 1,
      sym_option,
    STATE(281), 1,
      sym__options,
  [4322] = 2,
    ACTIONS(1134), 1,
      sym_option,
    STATE(278), 1,
      sym__options,
  [4329] = 2,
    ACTIONS(1136), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym__eol,
  [4336] = 2,
    ACTIONS(1134), 1,
      sym_option,
    STATE(270), 1,
      sym__options,
  [4343] = 2,
    ACTIONS(1132), 1,
      sym_mime_type,
    STATE(230), 1,
      sym__mime_types,
  [4350] = 2,
    ACTIONS(901), 1,
      sym_mime_type,
    STATE(198), 1,
      sym_mime,
  [4357] = 2,
    ACTIONS(1132), 1,
      sym_mime_type,
    STATE(261), 1,
      sym__mime_types,
  [4364] = 2,
    ACTIONS(1132), 1,
      sym_mime_type,
    STATE(264), 1,
      sym__mime_types,
  [4371] = 1,
    ACTIONS(1140), 1,
      anon_sym_SQUOTE,
  [4375] = 1,
    ACTIONS(1142), 1,
      anon_sym_SQUOTE,
  [4379] = 1,
    ACTIONS(1144), 1,
      sym__int,
  [4383] = 1,
    ACTIONS(1146), 1,
      aux_sym__quoted_string_token2,
  [4387] = 1,
    ACTIONS(1148), 1,
      sym_option,
  [4391] = 1,
    ACTIONS(1150), 1,
      aux_sym_key_token1,
  [4395] = 1,
    ACTIONS(1152), 1,
      sym_option,
  [4399] = 1,
    ACTIONS(1154), 1,
      sym_mime_type,
  [4403] = 1,
    ACTIONS(1156), 1,
      sym_option,
  [4407] = 1,
    ACTIONS(1158), 1,
      sym_function,
  [4411] = 1,
    ACTIONS(1138), 1,
      sym__eol,
  [4415] = 1,
    ACTIONS(604), 1,
      sym_mime_type,
  [4419] = 1,
    ACTIONS(592), 1,
      sym_mime_type,
  [4423] = 1,
    ACTIONS(1160), 1,
      sym_mime_type,
  [4427] = 1,
    ACTIONS(1162), 1,
      aux_sym__quoted_string_token1,
  [4431] = 1,
    ACTIONS(1164), 1,
      sym_mime_type,
  [4435] = 1,
    ACTIONS(1166), 1,
      anon_sym_GT,
  [4439] = 1,
    ACTIONS(1168), 1,
      anon_sym_DQUOTE,
  [4443] = 1,
    ACTIONS(1168), 1,
      anon_sym_SQUOTE,
  [4447] = 1,
    ACTIONS(1170), 1,
      aux_sym_back_quoted_string_token1,
  [4451] = 1,
    ACTIONS(1172), 1,
      sym_option,
  [4455] = 1,
    ACTIONS(600), 1,
      sym_mime_type,
  [4459] = 1,
    ACTIONS(1174), 1,
      anon_sym_BQUOTE,
  [4463] = 1,
    ACTIONS(1176), 1,
      sym__eol,
  [4467] = 1,
    ACTIONS(1178), 1,
      anon_sym_BQUOTE,
  [4471] = 1,
    ACTIONS(1180), 1,
      anon_sym_SQUOTE,
  [4475] = 1,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
  [4479] = 1,
    ACTIONS(1182), 1,
      anon_sym_GT,
  [4483] = 1,
    ACTIONS(596), 1,
      sym_mime_type,
  [4487] = 1,
    ACTIONS(1184), 1,
      anon_sym_BQUOTE,
  [4491] = 1,
    ACTIONS(1186), 1,
      ts_builtin_sym_end,
  [4495] = 1,
    ACTIONS(1140), 1,
      anon_sym_DQUOTE,
  [4499] = 1,
    ACTIONS(1188), 1,
      anon_sym_GT,
  [4503] = 1,
    ACTIONS(1172), 1,
      aux_sym_setenv_directive_token1,
  [4507] = 1,
    ACTIONS(1190), 1,
      anon_sym_BQUOTE,
  [4511] = 1,
    ACTIONS(1192), 1,
      sym_option,
  [4515] = 1,
    ACTIONS(1142), 1,
      anon_sym_DQUOTE,
  [4519] = 1,
    ACTIONS(1194), 1,
      anon_sym_BQUOTE,
  [4523] = 1,
    ACTIONS(1196), 1,
      anon_sym_SQUOTE,
  [4527] = 1,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE,
  [4531] = 1,
    ACTIONS(1198), 1,
      anon_sym_BQUOTE,
  [4535] = 1,
    ACTIONS(1200), 1,
      anon_sym_SQUOTE,
  [4539] = 1,
    ACTIONS(1200), 1,
      anon_sym_DQUOTE,
  [4543] = 1,
    ACTIONS(1202), 1,
      anon_sym_BQUOTE,
  [4547] = 1,
    ACTIONS(1204), 1,
      anon_sym_SQUOTE,
  [4551] = 1,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
  [4555] = 1,
    ACTIONS(1206), 1,
      anon_sym_BQUOTE,
  [4559] = 1,
    ACTIONS(1208), 1,
      anon_sym_SQUOTE,
  [4563] = 1,
    ACTIONS(1208), 1,
      anon_sym_DQUOTE,
  [4567] = 1,
    ACTIONS(1210), 1,
      aux_sym_back_quoted_string_token1,
  [4571] = 1,
    ACTIONS(1212), 1,
      aux_sym__quoted_string_token1,
  [4575] = 1,
    ACTIONS(1214), 1,
      aux_sym__quoted_string_token2,
  [4579] = 1,
    ACTIONS(1216), 1,
      aux_sym_key_token1,
  [4583] = 1,
    ACTIONS(1218), 1,
      aux_sym_back_quoted_string_token1,
  [4587] = 1,
    ACTIONS(1220), 1,
      aux_sym__quoted_string_token1,
  [4591] = 1,
    ACTIONS(1222), 1,
      aux_sym__quoted_string_token2,
  [4595] = 1,
    ACTIONS(1224), 1,
      aux_sym_key_token1,
  [4599] = 1,
    ACTIONS(1226), 1,
      aux_sym_back_quoted_string_token1,
  [4603] = 1,
    ACTIONS(1228), 1,
      aux_sym__quoted_string_token1,
  [4607] = 1,
    ACTIONS(1230), 1,
      aux_sym__quoted_string_token2,
  [4611] = 1,
    ACTIONS(1232), 1,
      aux_sym_back_quoted_string_token1,
  [4615] = 1,
    ACTIONS(1234), 1,
      aux_sym__quoted_string_token1,
  [4619] = 1,
    ACTIONS(1236), 1,
      aux_sym__quoted_string_token2,
  [4623] = 1,
    ACTIONS(1238), 1,
      aux_sym_back_quoted_string_token1,
  [4627] = 1,
    ACTIONS(1240), 1,
      aux_sym__quoted_string_token1,
  [4631] = 1,
    ACTIONS(1242), 1,
      aux_sym__quoted_string_token2,
  [4635] = 1,
    ACTIONS(1244), 1,
      aux_sym_back_quoted_string_token1,
  [4639] = 1,
    ACTIONS(1246), 1,
      aux_sym__quoted_string_token1,
  [4643] = 1,
    ACTIONS(1248), 1,
      aux_sym__quoted_string_token2,
  [4647] = 1,
    ACTIONS(1250), 1,
      aux_sym_back_quoted_string_token1,
  [4651] = 1,
    ACTIONS(1252), 1,
      aux_sym__quoted_string_token1,
  [4655] = 1,
    ACTIONS(1254), 1,
      aux_sym__quoted_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 44,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 129,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 283,
  [SMALL_STATE(22)] = 324,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 469,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 536,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 600,
  [SMALL_STATE(31)] = 632,
  [SMALL_STATE(32)] = 661,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 719,
  [SMALL_STATE(35)] = 748,
  [SMALL_STATE(36)] = 777,
  [SMALL_STATE(37)] = 806,
  [SMALL_STATE(38)] = 835,
  [SMALL_STATE(39)] = 864,
  [SMALL_STATE(40)] = 893,
  [SMALL_STATE(41)] = 922,
  [SMALL_STATE(42)] = 951,
  [SMALL_STATE(43)] = 980,
  [SMALL_STATE(44)] = 1009,
  [SMALL_STATE(45)] = 1038,
  [SMALL_STATE(46)] = 1067,
  [SMALL_STATE(47)] = 1096,
  [SMALL_STATE(48)] = 1125,
  [SMALL_STATE(49)] = 1154,
  [SMALL_STATE(50)] = 1183,
  [SMALL_STATE(51)] = 1212,
  [SMALL_STATE(52)] = 1230,
  [SMALL_STATE(53)] = 1256,
  [SMALL_STATE(54)] = 1282,
  [SMALL_STATE(55)] = 1308,
  [SMALL_STATE(56)] = 1334,
  [SMALL_STATE(57)] = 1360,
  [SMALL_STATE(58)] = 1386,
  [SMALL_STATE(59)] = 1412,
  [SMALL_STATE(60)] = 1438,
  [SMALL_STATE(61)] = 1464,
  [SMALL_STATE(62)] = 1490,
  [SMALL_STATE(63)] = 1516,
  [SMALL_STATE(64)] = 1542,
  [SMALL_STATE(65)] = 1568,
  [SMALL_STATE(66)] = 1594,
  [SMALL_STATE(67)] = 1620,
  [SMALL_STATE(68)] = 1646,
  [SMALL_STATE(69)] = 1672,
  [SMALL_STATE(70)] = 1698,
  [SMALL_STATE(71)] = 1724,
  [SMALL_STATE(72)] = 1750,
  [SMALL_STATE(73)] = 1776,
  [SMALL_STATE(74)] = 1802,
  [SMALL_STATE(75)] = 1828,
  [SMALL_STATE(76)] = 1854,
  [SMALL_STATE(77)] = 1880,
  [SMALL_STATE(78)] = 1906,
  [SMALL_STATE(79)] = 1932,
  [SMALL_STATE(80)] = 1958,
  [SMALL_STATE(81)] = 1984,
  [SMALL_STATE(82)] = 2010,
  [SMALL_STATE(83)] = 2028,
  [SMALL_STATE(84)] = 2054,
  [SMALL_STATE(85)] = 2080,
  [SMALL_STATE(86)] = 2106,
  [SMALL_STATE(87)] = 2132,
  [SMALL_STATE(88)] = 2158,
  [SMALL_STATE(89)] = 2184,
  [SMALL_STATE(90)] = 2210,
  [SMALL_STATE(91)] = 2236,
  [SMALL_STATE(92)] = 2262,
  [SMALL_STATE(93)] = 2288,
  [SMALL_STATE(94)] = 2314,
  [SMALL_STATE(95)] = 2340,
  [SMALL_STATE(96)] = 2366,
  [SMALL_STATE(97)] = 2392,
  [SMALL_STATE(98)] = 2418,
  [SMALL_STATE(99)] = 2444,
  [SMALL_STATE(100)] = 2470,
  [SMALL_STATE(101)] = 2496,
  [SMALL_STATE(102)] = 2522,
  [SMALL_STATE(103)] = 2548,
  [SMALL_STATE(104)] = 2574,
  [SMALL_STATE(105)] = 2600,
  [SMALL_STATE(106)] = 2626,
  [SMALL_STATE(107)] = 2652,
  [SMALL_STATE(108)] = 2663,
  [SMALL_STATE(109)] = 2686,
  [SMALL_STATE(110)] = 2702,
  [SMALL_STATE(111)] = 2718,
  [SMALL_STATE(112)] = 2738,
  [SMALL_STATE(113)] = 2756,
  [SMALL_STATE(114)] = 2765,
  [SMALL_STATE(115)] = 2782,
  [SMALL_STATE(116)] = 2801,
  [SMALL_STATE(117)] = 2810,
  [SMALL_STATE(118)] = 2819,
  [SMALL_STATE(119)] = 2828,
  [SMALL_STATE(120)] = 2837,
  [SMALL_STATE(121)] = 2846,
  [SMALL_STATE(122)] = 2855,
  [SMALL_STATE(123)] = 2867,
  [SMALL_STATE(124)] = 2879,
  [SMALL_STATE(125)] = 2887,
  [SMALL_STATE(126)] = 2895,
  [SMALL_STATE(127)] = 2903,
  [SMALL_STATE(128)] = 2911,
  [SMALL_STATE(129)] = 2925,
  [SMALL_STATE(130)] = 2939,
  [SMALL_STATE(131)] = 2947,
  [SMALL_STATE(132)] = 2955,
  [SMALL_STATE(133)] = 2969,
  [SMALL_STATE(134)] = 2977,
  [SMALL_STATE(135)] = 2989,
  [SMALL_STATE(136)] = 3003,
  [SMALL_STATE(137)] = 3017,
  [SMALL_STATE(138)] = 3029,
  [SMALL_STATE(139)] = 3041,
  [SMALL_STATE(140)] = 3053,
  [SMALL_STATE(141)] = 3065,
  [SMALL_STATE(142)] = 3073,
  [SMALL_STATE(143)] = 3085,
  [SMALL_STATE(144)] = 3097,
  [SMALL_STATE(145)] = 3111,
  [SMALL_STATE(146)] = 3123,
  [SMALL_STATE(147)] = 3135,
  [SMALL_STATE(148)] = 3147,
  [SMALL_STATE(149)] = 3159,
  [SMALL_STATE(150)] = 3171,
  [SMALL_STATE(151)] = 3183,
  [SMALL_STATE(152)] = 3195,
  [SMALL_STATE(153)] = 3207,
  [SMALL_STATE(154)] = 3219,
  [SMALL_STATE(155)] = 3229,
  [SMALL_STATE(156)] = 3241,
  [SMALL_STATE(157)] = 3253,
  [SMALL_STATE(158)] = 3265,
  [SMALL_STATE(159)] = 3277,
  [SMALL_STATE(160)] = 3289,
  [SMALL_STATE(161)] = 3301,
  [SMALL_STATE(162)] = 3313,
  [SMALL_STATE(163)] = 3325,
  [SMALL_STATE(164)] = 3337,
  [SMALL_STATE(165)] = 3351,
  [SMALL_STATE(166)] = 3363,
  [SMALL_STATE(167)] = 3370,
  [SMALL_STATE(168)] = 3381,
  [SMALL_STATE(169)] = 3394,
  [SMALL_STATE(170)] = 3407,
  [SMALL_STATE(171)] = 3418,
  [SMALL_STATE(172)] = 3425,
  [SMALL_STATE(173)] = 3432,
  [SMALL_STATE(174)] = 3439,
  [SMALL_STATE(175)] = 3446,
  [SMALL_STATE(176)] = 3453,
  [SMALL_STATE(177)] = 3460,
  [SMALL_STATE(178)] = 3467,
  [SMALL_STATE(179)] = 3474,
  [SMALL_STATE(180)] = 3481,
  [SMALL_STATE(181)] = 3488,
  [SMALL_STATE(182)] = 3495,
  [SMALL_STATE(183)] = 3502,
  [SMALL_STATE(184)] = 3509,
  [SMALL_STATE(185)] = 3516,
  [SMALL_STATE(186)] = 3523,
  [SMALL_STATE(187)] = 3530,
  [SMALL_STATE(188)] = 3539,
  [SMALL_STATE(189)] = 3550,
  [SMALL_STATE(190)] = 3557,
  [SMALL_STATE(191)] = 3564,
  [SMALL_STATE(192)] = 3571,
  [SMALL_STATE(193)] = 3578,
  [SMALL_STATE(194)] = 3585,
  [SMALL_STATE(195)] = 3594,
  [SMALL_STATE(196)] = 3601,
  [SMALL_STATE(197)] = 3608,
  [SMALL_STATE(198)] = 3615,
  [SMALL_STATE(199)] = 3622,
  [SMALL_STATE(200)] = 3633,
  [SMALL_STATE(201)] = 3640,
  [SMALL_STATE(202)] = 3647,
  [SMALL_STATE(203)] = 3654,
  [SMALL_STATE(204)] = 3661,
  [SMALL_STATE(205)] = 3667,
  [SMALL_STATE(206)] = 3673,
  [SMALL_STATE(207)] = 3679,
  [SMALL_STATE(208)] = 3685,
  [SMALL_STATE(209)] = 3691,
  [SMALL_STATE(210)] = 3697,
  [SMALL_STATE(211)] = 3707,
  [SMALL_STATE(212)] = 3713,
  [SMALL_STATE(213)] = 3719,
  [SMALL_STATE(214)] = 3725,
  [SMALL_STATE(215)] = 3731,
  [SMALL_STATE(216)] = 3737,
  [SMALL_STATE(217)] = 3743,
  [SMALL_STATE(218)] = 3749,
  [SMALL_STATE(219)] = 3755,
  [SMALL_STATE(220)] = 3761,
  [SMALL_STATE(221)] = 3767,
  [SMALL_STATE(222)] = 3773,
  [SMALL_STATE(223)] = 3779,
  [SMALL_STATE(224)] = 3785,
  [SMALL_STATE(225)] = 3791,
  [SMALL_STATE(226)] = 3797,
  [SMALL_STATE(227)] = 3803,
  [SMALL_STATE(228)] = 3809,
  [SMALL_STATE(229)] = 3815,
  [SMALL_STATE(230)] = 3821,
  [SMALL_STATE(231)] = 3827,
  [SMALL_STATE(232)] = 3833,
  [SMALL_STATE(233)] = 3839,
  [SMALL_STATE(234)] = 3849,
  [SMALL_STATE(235)] = 3855,
  [SMALL_STATE(236)] = 3861,
  [SMALL_STATE(237)] = 3867,
  [SMALL_STATE(238)] = 3873,
  [SMALL_STATE(239)] = 3879,
  [SMALL_STATE(240)] = 3885,
  [SMALL_STATE(241)] = 3891,
  [SMALL_STATE(242)] = 3897,
  [SMALL_STATE(243)] = 3903,
  [SMALL_STATE(244)] = 3909,
  [SMALL_STATE(245)] = 3915,
  [SMALL_STATE(246)] = 3921,
  [SMALL_STATE(247)] = 3927,
  [SMALL_STATE(248)] = 3933,
  [SMALL_STATE(249)] = 3939,
  [SMALL_STATE(250)] = 3945,
  [SMALL_STATE(251)] = 3951,
  [SMALL_STATE(252)] = 3957,
  [SMALL_STATE(253)] = 3963,
  [SMALL_STATE(254)] = 3969,
  [SMALL_STATE(255)] = 3975,
  [SMALL_STATE(256)] = 3981,
  [SMALL_STATE(257)] = 3987,
  [SMALL_STATE(258)] = 3993,
  [SMALL_STATE(259)] = 3999,
  [SMALL_STATE(260)] = 4005,
  [SMALL_STATE(261)] = 4011,
  [SMALL_STATE(262)] = 4017,
  [SMALL_STATE(263)] = 4023,
  [SMALL_STATE(264)] = 4029,
  [SMALL_STATE(265)] = 4035,
  [SMALL_STATE(266)] = 4041,
  [SMALL_STATE(267)] = 4047,
  [SMALL_STATE(268)] = 4053,
  [SMALL_STATE(269)] = 4059,
  [SMALL_STATE(270)] = 4065,
  [SMALL_STATE(271)] = 4071,
  [SMALL_STATE(272)] = 4077,
  [SMALL_STATE(273)] = 4083,
  [SMALL_STATE(274)] = 4089,
  [SMALL_STATE(275)] = 4097,
  [SMALL_STATE(276)] = 4103,
  [SMALL_STATE(277)] = 4109,
  [SMALL_STATE(278)] = 4115,
  [SMALL_STATE(279)] = 4121,
  [SMALL_STATE(280)] = 4127,
  [SMALL_STATE(281)] = 4133,
  [SMALL_STATE(282)] = 4139,
  [SMALL_STATE(283)] = 4145,
  [SMALL_STATE(284)] = 4151,
  [SMALL_STATE(285)] = 4157,
  [SMALL_STATE(286)] = 4163,
  [SMALL_STATE(287)] = 4169,
  [SMALL_STATE(288)] = 4175,
  [SMALL_STATE(289)] = 4181,
  [SMALL_STATE(290)] = 4187,
  [SMALL_STATE(291)] = 4193,
  [SMALL_STATE(292)] = 4199,
  [SMALL_STATE(293)] = 4205,
  [SMALL_STATE(294)] = 4211,
  [SMALL_STATE(295)] = 4217,
  [SMALL_STATE(296)] = 4223,
  [SMALL_STATE(297)] = 4229,
  [SMALL_STATE(298)] = 4235,
  [SMALL_STATE(299)] = 4241,
  [SMALL_STATE(300)] = 4247,
  [SMALL_STATE(301)] = 4253,
  [SMALL_STATE(302)] = 4259,
  [SMALL_STATE(303)] = 4265,
  [SMALL_STATE(304)] = 4271,
  [SMALL_STATE(305)] = 4277,
  [SMALL_STATE(306)] = 4283,
  [SMALL_STATE(307)] = 4289,
  [SMALL_STATE(308)] = 4295,
  [SMALL_STATE(309)] = 4301,
  [SMALL_STATE(310)] = 4308,
  [SMALL_STATE(311)] = 4315,
  [SMALL_STATE(312)] = 4322,
  [SMALL_STATE(313)] = 4329,
  [SMALL_STATE(314)] = 4336,
  [SMALL_STATE(315)] = 4343,
  [SMALL_STATE(316)] = 4350,
  [SMALL_STATE(317)] = 4357,
  [SMALL_STATE(318)] = 4364,
  [SMALL_STATE(319)] = 4371,
  [SMALL_STATE(320)] = 4375,
  [SMALL_STATE(321)] = 4379,
  [SMALL_STATE(322)] = 4383,
  [SMALL_STATE(323)] = 4387,
  [SMALL_STATE(324)] = 4391,
  [SMALL_STATE(325)] = 4395,
  [SMALL_STATE(326)] = 4399,
  [SMALL_STATE(327)] = 4403,
  [SMALL_STATE(328)] = 4407,
  [SMALL_STATE(329)] = 4411,
  [SMALL_STATE(330)] = 4415,
  [SMALL_STATE(331)] = 4419,
  [SMALL_STATE(332)] = 4423,
  [SMALL_STATE(333)] = 4427,
  [SMALL_STATE(334)] = 4431,
  [SMALL_STATE(335)] = 4435,
  [SMALL_STATE(336)] = 4439,
  [SMALL_STATE(337)] = 4443,
  [SMALL_STATE(338)] = 4447,
  [SMALL_STATE(339)] = 4451,
  [SMALL_STATE(340)] = 4455,
  [SMALL_STATE(341)] = 4459,
  [SMALL_STATE(342)] = 4463,
  [SMALL_STATE(343)] = 4467,
  [SMALL_STATE(344)] = 4471,
  [SMALL_STATE(345)] = 4475,
  [SMALL_STATE(346)] = 4479,
  [SMALL_STATE(347)] = 4483,
  [SMALL_STATE(348)] = 4487,
  [SMALL_STATE(349)] = 4491,
  [SMALL_STATE(350)] = 4495,
  [SMALL_STATE(351)] = 4499,
  [SMALL_STATE(352)] = 4503,
  [SMALL_STATE(353)] = 4507,
  [SMALL_STATE(354)] = 4511,
  [SMALL_STATE(355)] = 4515,
  [SMALL_STATE(356)] = 4519,
  [SMALL_STATE(357)] = 4523,
  [SMALL_STATE(358)] = 4527,
  [SMALL_STATE(359)] = 4531,
  [SMALL_STATE(360)] = 4535,
  [SMALL_STATE(361)] = 4539,
  [SMALL_STATE(362)] = 4543,
  [SMALL_STATE(363)] = 4547,
  [SMALL_STATE(364)] = 4551,
  [SMALL_STATE(365)] = 4555,
  [SMALL_STATE(366)] = 4559,
  [SMALL_STATE(367)] = 4563,
  [SMALL_STATE(368)] = 4567,
  [SMALL_STATE(369)] = 4571,
  [SMALL_STATE(370)] = 4575,
  [SMALL_STATE(371)] = 4579,
  [SMALL_STATE(372)] = 4583,
  [SMALL_STATE(373)] = 4587,
  [SMALL_STATE(374)] = 4591,
  [SMALL_STATE(375)] = 4595,
  [SMALL_STATE(376)] = 4599,
  [SMALL_STATE(377)] = 4603,
  [SMALL_STATE(378)] = 4607,
  [SMALL_STATE(379)] = 4611,
  [SMALL_STATE(380)] = 4615,
  [SMALL_STATE(381)] = 4619,
  [SMALL_STATE(382)] = 4623,
  [SMALL_STATE(383)] = 4627,
  [SMALL_STATE(384)] = 4631,
  [SMALL_STATE(385)] = 4635,
  [SMALL_STATE(386)] = 4639,
  [SMALL_STATE(387)] = 4643,
  [SMALL_STATE(388)] = 4647,
  [SMALL_STATE(389)] = 4651,
  [SMALL_STATE(390)] = 4655,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(85),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(111),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(108),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(22),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(21),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(233),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(168),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(24),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(23),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(210),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(169),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(18),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(16),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(105),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(104),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(103),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(102),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(101),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(97),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(93),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(92),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(91),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(90),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(89),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(19),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(17),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(30),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(31),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(26),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(52),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(98),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(87),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(75),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(76),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(77),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(78),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(79),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(80),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(83),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(84),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(99),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(100),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(106),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(96),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(95),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(94),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(88),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(86),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(53),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(54),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(55),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(56),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(57),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(58),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(59),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(60),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(61),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(62),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(63),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(64),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(65),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(66),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(67),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(32),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(49),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(50),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(69),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(70),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(71),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(72),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(73),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(74),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(170),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(311),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(312),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(314),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(309),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(323),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(81),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(329),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(188),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_back_quoted_string, 3, .production_id = 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_back_quoted_string, 3, .production_id = 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3, .production_id = 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3, .production_id = 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(324),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(82),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(371),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(110),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_name, 1),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2), SHIFT_REPEAT(326),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 1),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(375),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(129),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 1),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2), SHIFT_REPEAT(45),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 1),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2), SHIFT_REPEAT(44),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2), SHIFT_REPEAT(327),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2), SHIFT_REPEAT(274),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 4),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2), SHIFT_REPEAT(43),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2), SHIFT_REPEAT(20),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 2),
  [843] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2), SHIFT_REPEAT(316),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2), SHIFT_REPEAT(40),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 2),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 2),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 1),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 3),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 2),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 2),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 1),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 2),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 1),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 3),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailbox, 1),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2),
  [931] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2), SHIFT_REPEAT(199),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 3, .production_id = 4),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quadoption, 1),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmime_lookup_directive, 2),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsetenv_directive, 2),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_directive, 2, .production_id = 1),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_view_directive, 2),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmono_directive, 2),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 2),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmy_hdr_directive, 2),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unscore_directive, 2),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_hook_directive, 3),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 2),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_hook_directive, 2),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 3, .production_id = 2),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 3),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 2),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 3),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 2),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 3),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cd_directive, 2),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_directive, 2),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbind_directive, 3),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative_order_directive, 2),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmacro_directive, 3),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhook_directive, 2),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhdr_order_directive, 2),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_hook_directive, 3),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 1),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_hook_directive, 3),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append_hook_directive, 3),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 3),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncolor_directive, 2),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_directive, 2),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_directive, 2),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectrx_directive, 2),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setenv_directive, 3),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 2),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spam_directive, 2),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 4, .production_id = 2),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_unpin_directive, 2),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_pin_directive, 2),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_score_directive, 2),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 4),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finish_directive, 2),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_directive, 2),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 4),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailto_allow_directive, 2),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_directive, 4),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_directive, 4),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toggle_directive, 2),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_my_hdr_directive, 2),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mono_directive, 2),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime_lookup_directive, 2),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto_allow_directive, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 2),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iconv_hook_directive, 2),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reset_directive, 2),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_crypt_hook_directive, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 2),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_directive, 2),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 2),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 4),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailboxes_directive, 2),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 2),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternative_order_directive, 2),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unauto_view_directive, 2),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_save_hook_directive, 2),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shutdown_hook_directive, 2),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hdr_order_directive, 2),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifdef_directive, 2),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailboxes_directive, 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_startup_hook_directive, 2),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeout_hook_directive, 2),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 5),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send2_hook_directive, 2),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifndef_directive, 2),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send_hook_directive, 2),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 6),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reply_hook_directive, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_hook_directive, 2),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignore_directive, 2),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lists_directive, 2),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 2),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 2),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_hook_directive, 2),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_hook_directive, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disposition, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_muttrc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
