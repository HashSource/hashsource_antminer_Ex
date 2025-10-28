int __fastcall json_dumps(_DWORD *a1, int a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = strbuffer_init(v7);
  if ( v4 )
    return 0;
  if ( !json_dump_callback(a1, (int (__fastcall *)(char *, int, int))sub_33070, (int)v7, a2) )
  {
    v6 = strbuffer_value(v7);
    v4 = jsonp_strdup(v6);
  }
  strbuffer_close(v7);
  return v4;
}
