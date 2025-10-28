int __fastcall sub_1EAFBC(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  const char **v5; // r4
  size_t v6; // r5
  int result; // r0
  int v8; // r3
  const char *v9; // r4

  v3 = sub_16F67C(a1);
  v4 = ((int (__fastcall *)(int))loc_1E2798)(v3);
  v5 = (const char **)dword_488C94;
  v6 = sub_1E28B8(v4);
  result = ((int (__fastcall *)(int))loc_1E21C0)(71);
  if ( result != 2 )
  {
    v8 = a2;
    if ( a2 )
      v8 = 1;
    sub_93198((char *)*v5, v6, "QThreadEvents:%x", v8);
    sub_1E7E14(*v5);
    sub_1E4EE0((char **)v5, (size_t *)v5 + 1, 0, 0, 0);
    result = sub_1E1790(*v5, dword_488B5C);
    if ( result )
    {
      if ( result == 1 )
      {
        v9 = *v5;
        result = strcmp(v9, "OK");
        if ( result )
          sub_94708("Remote refused setting thread events: %s", v9);
      }
    }
    else
    {
      return sub_946D8("Remote failure reply: %s", *v5);
    }
  }
  return result;
}
