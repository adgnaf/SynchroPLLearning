# Scade6Learning

Learning Scade6 synchronous programming language and Lustre v6 by program examples.

* `scade` - Scade examples
* `lustre_core` - Lustre Core examples 
* `lustre_v6` - Lustre v6 specific examples 

## How to compile `.scade` 

```
kcg<version> -target C -root <root name> <file name>.scade
```

## Categories 

### open path 

`scade/open_path`

### package declaration 

`scade/package_decl`

### group block 

`scade/group_block`

### type block 

`scade/type_block`

### const block 

`scade/const_block`

### sensor block 

`scade/sensor_block`

### user-defined operator declaration 

`scade/user_op_decl`

### interface status 

`scade/interface_status`

### type expression 

`scade/type_expr`

### groups 

`scade/groups`

### actions 

`scade/actions`

### default declaration 

`scade/default_decl`

### genericity 

`scade/genericity`

### emission 

`scade/emission`

### last declaration 

`scade/last_decl`

### signal block 

`scade/signal_block`

### size declaration 

`scade/size_decl`

### expression  

`scade/expr`

Expressions supported in Scade. 

#### apply expression 

`apply_expr` overs:
* iterator expressions, include `map`, `fold`, `mapi`, `foldi`, `mapfold`, `mapfoldi`.
* conditional iterator expressions, include `mapw`, `foldw`, `mapwi`, `foldwi`, `mapfoldw`, `mapfoldwi`. 
* flatten, make, restart, prefix, `activate op by boolean`

#### array expression 

`array_expr` covers `concatenation`, `dynamic projection`, `projection`, `scalar to vector`, `slice`, `data array`, `reverse`, `transpose`. 

#### binary relation operator 

`bin_relation_op` covers `different`, `equal`, `greater than`, `greater than or equal`, `less than`, `less than or equal`. 

#### id expression 

`id_expr`

#### mixed constructor 

`mixed_constructor`

#### switch expression 

`switch_expr` covers `case`, `if then else`. 

#### arithmetic expression 

`arith_expr` covers `division`, `lnot`, `lsl`, `lxor`, `mod`, `numericCast`, `unary minus`, `land`, `lor`, `lsr`, `minus`, `multiplication`, `plus`, `unary plus`. 

#### atom 

`atom`

#### boolean expression 

`bool_expr` covers `and`, `not`, `or`, `sharp`, `xor`. 

#### list expression 

`list_expr`

#### sturct expression 

`struct_expr`

#### temporal expression 

`tempo_expr` covers `fby`, `merge`, `pre`, `times` and `init`. 

### precedence 

Precedence and associativity of operators.

`scade/precedence`

### pragma 

`scade/pragma`

## References 

* An overview of Scade, a synchronous language for safety-critical software (keynote), REBLS 2020: Proceedings of the 7th ACM SIGPLAN International Workshop on Reactive and Event-Based Languages and Systems, Virtual Event, USA, November 16, 2020

* SCADE 6: A formal language for embedded critical software development (invited paper), 11th International Symposium on Theoretical Aspects of Software Engineering, TASE 2017, Sophia Antipolis, France, September 13-15, 2017

* A conservative extension of synchronous data-flow with state machines, EMSOFT 2005, September 18-22, 2005, Jersey City, NJ, USA, 5th ACM International Conference On Embedded Software, Proceedings
