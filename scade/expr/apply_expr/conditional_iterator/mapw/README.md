# Introduction of mapw 

From an operational point of view, there are `size` instances of `op` activated in order from `0` to `size-1` while the corresponding condition is true. As soon as one instance returns a false condition, the instances that follow are not activated in the current cycle and the values needed for the output arrays are provided by the default expressions. In particular, if `initcond` is false, none of the `op` instances are activated and the returned value for `idx` is `0`.

