# Lustre core vs Scade 6 

This page aims to illustrate the difference between Lustre Core and Scade. The definition of Lustre Core is according to `Lustre Core Syntax` chapter from `The Lustre V6 Reference Manual`.

## comments 

Both in Scade, comment natation supports one-line comment and multi-line comment. 
* One-line comments start with `--` and stop at the end of line. 
* Multi-line comments start with `/*` and end at the next following `*/`

In Lustre Core, for multi-line comments, it also supports start with `(*` and end at the next following `*)`.

## pragma 

The pragma in Lustre Core is different with that in Scade. In Lustre Core, the definition of pragma is 

```
Pragma ::= {% TK_IDENT : TK_IDENT %}
```

While in scade, the definition of pragma is 

```
pragma ::= #pragma *character #end 
        | #alphanumeric+ 
```

## core types and immediate constants 

In Lustre Core, type of integer use keyword `int`. In Scade, there is no type called `int`, but contains `signed <<expr>>`, `int8`, `int16`, `int32`, `int64`, `unsigned <<expr>>`, `uint8`, `uint16`, `uint32`, `uint64`. 

For float pointing type, in Lustre Core, the type is `real`. In Scade, float pointing types are `float32`, `float64`. 

`bool` and `^ Expression` are supported in both Lustre Core and Scade. 

Both Lustre Core and Scade use `true`, `false` as boolean contant. 

## types declaration 

Lustre Core and Scade both support `type block`. In Lustre Core, the definition is as follows 

```
TypeDecl ::= type TypeDeclList
TypeDeclList ::= OneTypeDecl ; { OneTypeDecl ; }
OneTypeDecl ::= Lv6Id [= Type]
```

In Scade, extra components are supported, as illustrated in `type_decl` :

```
type_decl ::= interface_status ID [[ = type_def ]] [[ is numeric_kind ]]
```

`interface_status` and `[[ is numeric_kind ]]` are supported. 

## abstract types declaration 

In Lustre Core, `Type` can be omitted in type declaration 

```
OneTypeDecl ::= Lv6Id [= Type] 
```

While in Scade, only `imported` type declaration can omit `type_expr`. 

## constant declarations 

Both Lustre Core and Scade support `constant declaration block`. In Lustre Core, constant can be defined by initial value only 

```
OneConstDecl ::= Lv6Id = Expression
```

While in Scade, `type` must be given. 

In Scade, `interface_status` can be used to declare constant, while it is not existed in Lustre Core. 

## functions and nodes 

Bothe Lustre Core and Scade support `node` and `function`. 

In Lustre Core, there are several features that are not supported in Scade:
* `= EffectiveNode` can be used to define `function` or `node`. 
* Use `unsafe` to identify a `function` or `node`.
* const block as local declaration. 

In Scade, there are several features that are not supported in Lustre Core:
* `interface_status` component 
* `where decl` component 
* `spec_decl` component 
* `signal block` in body 
* single `equation` without `let` and `tel` 

## equations and assertions 

The form of `equation` in Lustre Core and Scade is quite similar, but still exist differences. 
* `assert` is used in Lustre Core, `guarantee` and `assume` are used in Scade. 
* `FieldLeftItem` and `TableLeftItem` can be used as `lhs` in Lustre Core, but they are not supported in Scade.
* `emission` and `control block` are supported in Scade, but they are not supported in Lustre Core. 

## expression 

Both Lustre Core and Scade support arithmetic expressions, relation expressions, boolean expressions. But there are expressions in Scade that not supported in Lustre Core. 

* high order expression such as map, fold, etc. 
* bitwise expressions. 

TODO: add expressions in Scade not supported in Lustre Core. 