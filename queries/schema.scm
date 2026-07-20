(path) @include.-

(set_directive
  (option) @--option
  (string) @set.-option)

(set_directive
  (option) @--option
  (int) @set.-option.--integer)

(set_directive
  (option) @--option
  (float) @set.-option.--number)

(set_directive
  (option) @--option
  (bool) @set.-option.--boolean)

(map_directive
  (#set! --mode normal)
  (mode
    (mode_name) @--mode)?
  (key) @map.-mode.-.key
  (function) @map.-mode.-.function
  (argument)? @map.-mode.-.argument)

(unmap_directive
  (#set! --mode normal)
  (mode
    (mode_name) @--mode)?
  (key) @unmap.-mode.-)
