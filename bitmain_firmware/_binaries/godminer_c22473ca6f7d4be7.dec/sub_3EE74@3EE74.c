int __fastcall sub_3EE74(int a1, int a2)
{
  _DWORD *v3; // r4
  int v5; // r5

  v3 = (_DWORD *)(a2 + 1512);
  if ( !strncasecmp((const char *)(a1 + 1064), (const char *)(a2 + 1512), 0x20u) )
  {
    if ( !strncasecmp((const char *)(a1 + 8), (const char *)(a2 + 456), 0x20u) )
      v5 = 0;
    else
      v5 = 2;
  }
  else
  {
    v5 = 2;
  }
  set_cur_seed(v3);
  return v5;
}
