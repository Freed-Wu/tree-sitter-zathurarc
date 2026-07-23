(set_directive
  (option) @_option
  (string) @injection.content
  (#eq? @_option "synctex-editor-command")
  (#offset! @injection.content 0 1 0 -1)
  (#set! injection.language "bash"))

(comment
  (body) @injection.content
  (#set! injection.language "comment"))

(map_directive
  (function) @_function
  (argument) @injection.content
  (#eq? @_function "exec")
  (#set! injection.language "bash"))
