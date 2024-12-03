# Lustre samples 

## Check syntax of lustre program 

Initialize environment 

```bash 
eval $(opam env)
```

Check syntax of lustre program 

```bash
lv6 <file>.lus -n <rootNode> 
```

## Generate C code 

```bash
lv6 <file>.lus -n <rootNode> -2c 
```

## Generate simulation binary 

```bash 
lv6 <file>.lus -n <rootNode> -2c -cc 
```

File `.exec` is executable binary for simulation.