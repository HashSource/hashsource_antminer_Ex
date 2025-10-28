int __fastcall sub_1DD798(int a1, int a2, int a3)
{
  __int64 v6; // r0
  int v7; // r0

  ((void (__fastcall *)(int, _DWORD, _DWORD, int))loc_1DD4DC)(a1, **(_DWORD **)a3, 0, 1);
  if ( *(_BYTE *)(a3 + 16) )
  {
    v6 = sub_94728(
           (int)"regcache.c",
           216,
           "%s: Assertion `%s' failed.",
           "regcache::regcache(regcache::readonly_t, const regcache&)",
           "!src.m_readonly_p");
    v7 = sub_1DFE64(a1, HIDWORD(v6));
    sub_339024(v7);
  }
  ((void (__fastcall *)(int, void *, int))loc_1DD64C)(a1, &sub_1DE05C, a3);
  return a1;
}
