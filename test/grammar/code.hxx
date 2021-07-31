const char *code = R"ABCD(note: ...

note: asd
      asd...

requirement: something...

feature: "something"

note: asd
      asd...

background:
    given i have 10 dollars
    do 10 times:
        and i spend 1 dollar <kjhjkh> "gfhf"
    done
    then i have 0 dollars left
end

note: asd
      asd...

note: ...

fragment: "subtract {A} from {B} as {C}"
    given i subtract {A} from {B}
    and store result in {C}
    set aNumber as 9
    set aString as """a long asdasd string"""
    set aMultiLineText as
    """a long asdasd
    string"""
end

fragment js: "add {a}, {b} using nodejs"
```
let a = {a};
let b = {b};
return a + b;
```
end

fragment lua: "add {a}, {b} using lua"
```
```
end

note: asd
      asd...

fragment: "get {N}th row {J}th column from csv"
    set aVar as 9
    set aVal as
    """ramneek
    handa"""
end

note: asd
      asd...

scenario: "check that"
    given i have 10 dollars

    do 10 times:
        and i spend 1 dollar <kjhjkh> "gfhf"
    done
    then i have 0 dollars left
end

note: asd
      asd...

@tags sdasd
scenario: ""
end
)ABCD";
