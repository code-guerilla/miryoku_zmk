 // Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Define Select All + Copy macro
U_MACRO(u_select_all_copy,
  wait-ms = <30>;
  tap-ms = <40>;
  bindings
    = <&macro_press &kp LCTRL>
    , <&macro_tap &kp A>
    , <&macro_release &kp LCTRL>
    , <&macro_wait_time 50>
    , <&macro_press &kp LCTRL>
    , <&macro_tap &kp C>
    , <&macro_release &kp LCTRL>
    ;
)
