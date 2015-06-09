# CMakeLibraryDependencyBug
Small example of a cmake bug (maybe)

This is actually a valid example: 

> This works because the link dependency is not evaluated until generate
> time when the entire configuration process has finished and all targets
> are defined.  Even if "bar" is never defined it will simply become a
> "-lbar" on the link line.  This is all intentional and by design.
