(path) @include.-

(set_directive
  (option) @--option
  (_) @set.-option)

(map_directive
  (#set! mode "normal")
  (mode
    (mode_name) @--mode)?
  (key) @map.-mode.-.key
  (function) @map.-mode.-.function
  (argument)? @map.-mode.-.argument)

(unmap_directive
  (#set! mode "normal")
  (mode
    (mode_name) @--mode)?
  (key) @unmap.-mode.-)
