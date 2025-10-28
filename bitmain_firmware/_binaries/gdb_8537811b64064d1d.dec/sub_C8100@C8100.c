int __fastcall sub_C8100(int a1)
{
  int v2; // r4
  const char *v3; // r1
  char *v4; // r6
  int result; // r0
  char *v6; // r2
  _BYTE v7[20]; // [sp+4h] [bp-4Ch] BYREF
  int v8; // [sp+18h] [bp-38h]

  v2 = *(_DWORD *)sub_243004(a1);
  sub_266618(v7);
  if ( v8 )
  {
    sub_B76BC(4);
    sub_2575CC(v2, "addr");
  }
  sub_B76BC(5);
  v3 = *(const char **)(a1 + 140);
  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( v3 )
    {
      v4 = sub_93168("load of library matching %s", v3);
      goto LABEL_8;
    }
    v4 = (char *)sub_32727C("load of library");
  }
  else
  {
    if ( v3 )
    {
      v4 = sub_93168("unload of library matching %s", v3);
LABEL_8:
      sub_257610(v2, "what", v4);
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_16;
    }
    v4 = (char *)sub_32727C("unload of library");
  }
  sub_257610(v2, "what", v4);
LABEL_16:
  free(v4);
LABEL_9:
  result = sub_257418(v2);
  if ( result )
  {
    v6 = "load";
    if ( !*(_BYTE *)(a1 + 136) )
      v6 = "unload";
    return sub_257610(v2, "catch-type", v6);
  }
  return result;
}
