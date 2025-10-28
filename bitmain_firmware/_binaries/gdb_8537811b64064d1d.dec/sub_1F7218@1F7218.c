int __fastcall sub_1F7218(const char *a1)
{
  char *v1; // r4
  int v2; // r0
  char *v3; // r1
  int v5; // [sp+0h] [bp-1Ch] BYREF
  const char *v6; // [sp+4h] [bp-18h] BYREF
  int v7; // [sp+8h] [bp-14h] BYREF
  char *command; // [sp+Ch] [bp-10h] BYREF

  v6 = a1;
  if ( sub_1F6138(&v6, &v7, &command) )
    return sub_1F61CC(-1, 5);
  if ( command )
  {
    v1 = (char *)&v5;
    if ( !sub_230048(v7, &v5, command) )
    {
      if ( dword_489348 )
        goto LABEL_6;
      if ( command )
        return sub_1F61CC(-1, 1);
      return sub_1F61CC(0, 0);
    }
    return sub_1F61CC(-1, 5);
  }
  if ( !dword_489348 )
    return sub_1F61CC(0, 0);
  v1 = command;
LABEL_6:
  v2 = system(v1);
  v3 = command;
  if ( command )
  {
    if ( v2 == -1 )
      return sub_1F649C();
    v2 = BYTE1(v2);
    v3 = 0;
  }
  return sub_1F61CC(v2, (int)v3);
}
