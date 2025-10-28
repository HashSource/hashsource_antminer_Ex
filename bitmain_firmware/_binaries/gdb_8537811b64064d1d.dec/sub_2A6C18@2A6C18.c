void __fastcall __noreturn sub_2A6C18(int a1, int a2, int a3)
{
  if ( a3 )
    sub_2A6A84("BFD %s internal error, aborting at %s:%d in %s\n", "(GNU Binutils) 2.29.51", a1, a2, a3);
  else
    sub_2A6A84("BFD %s internal error, aborting at %s:%d\n", "(GNU Binutils) 2.29.51", a1, a2);
  sub_2A6A84("Please report this bug.\n");
  exit(1);
}
