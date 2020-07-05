# c: learn system programming (just after assembly project).
It is C89 specification used here (the most common).
To force the compiler to use only those features supported by a certain standard we use the following set of flags:
– -std=c89 or -std=c99 to select either the C89 or C99 standard.
– -pedantic-errors to disable non-standard language extensions.
– -Wall to show all warnings no matter how important they are.
– -Werror to transform warnings into errors so you would not be able to compile code with warnings.
