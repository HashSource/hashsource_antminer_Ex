void __fastcall __noreturn sub_6A084(int a1)
{
  _BYTE *v1; // r0

  v1 = (_BYTE *)sub_93634(a1);
  if ( v1 )
  {
    if ( *v1 )
      sub_94708("guile-repl currently does not take any arguments.");
  }
  sub_94708("Guile scripting is not supported in this copy of GDB.");
}
