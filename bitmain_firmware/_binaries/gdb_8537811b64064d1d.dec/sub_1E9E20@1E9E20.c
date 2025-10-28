int __fastcall sub_1E9E20(int a1, int a2)
{
  int v3; // r0
  const char **v4; // r5
  int result; // r0
  char *v6; // r6
  size_t v7; // r0
  int v8; // r0
  char *v9; // r0
  const char *v10; // r4

  v3 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v3);
  v4 = (const char **)dword_488C94;
  result = ((int (__fastcall *)(int))loc_1E21C0)(75);
  if ( result == 1 )
  {
    v6 = (char *)*v4;
    v7 = sub_1E28B8(1);
    sub_93198(v6, v7, "QTDisconnected:%x", a2);
    v8 = sub_1E7E14(*v4);
    v9 = sub_1E9910(v8);
    v10 = v9;
    if ( !*v9 )
      sub_94708("Target does not support this command.");
    result = strcmp(v9, "OK");
    if ( result )
      sub_94708("Bogus reply from target: %s", v10);
  }
  else if ( a2 )
  {
    return sub_946D8("Target does not support disconnected tracing.");
  }
  return result;
}
