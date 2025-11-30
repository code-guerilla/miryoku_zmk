// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/ {
    macros {
        SA_C: select_all_copy {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <40>;
            tap-ms = <40>;
            bindings
                = <&kp LC(A)>
                , <&kp LC(C)>;
        };
    };
};

#define MIRYOKU_LAYOUTMAPPING_ANYWHY_FLAKE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX                 XXX  XXX  XXX  XXX  XXX  XXX \
&gresc K00  K01  K02  K03  K04               K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  XXX \
&SA_C K20  K21  K22  K23  K24                 K25  K26  K27  K28  K29  &kp LC(V) \
        &kp RALT K32  K32  K33  K34       K35  K36  K37  &kp RALT &kp RALT

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_ANYWHY_FLAKE
