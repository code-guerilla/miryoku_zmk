 // Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Define your macros
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

// You can also override keys if needed
// #define MIRYOKU_ALPHAS_QWERTY
