// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// 1. DEFINE YOUR CUSTOM MACROS
/ {
    macros {
        SA_C: select_all_copy {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <40>;
            tap-ms = <40>;
            bindings = <&kp LC(A) &kp LC(C)>;
        };
    };
};

// 2. DEFINE HELPER
#define XXX &none

// 3. OVERRIDE THE MAPPING
// We accept the standard Miryoku names (LT0, LT1...) as inputs.
// We arrange them visually to match the Anywhy Flake physical layout.
// We insert &SA_C and other custom keys into the extra slots.

#define MIRYOKU_MAPPING( \
     LT0, LT1, LT2, LT3, LT4,           RT0, RT1, RT2, RT3, RT4, \
     LM0, LM1, LM2, LM3, LM4,           RM0, RM1, RM2, RM3, RM4, \
     LB0, LB1, LB2, LB3, LB4,           RB0, RB1, RB2, RB3, RB4, \
     LZ,  LT,  LM,                      RM,  RT,  RZ \
) \
XXX    XXX  XXX  XXX  XXX  XXX          XXX  XXX  XXX  XXX  XXX  XXX \
&gresc LT0  LT1  LT2  LT3  LT4          RT0  RT1  RT2  RT3  RT4  XXX \
XXX    LM0  LM1  LM2  LM3  LM4          RM0  RM1  RM2  RM3  RM4  XXX \
&SA_C  LB0  LB1  LB2  LB3  LB4          RB0  RB1  RB2  RB3  RB4  &kp LC(V) \
       &kp RALT  LZ   LT   LM           RM   RT   RZ   &kp RALT  &kp RALT
