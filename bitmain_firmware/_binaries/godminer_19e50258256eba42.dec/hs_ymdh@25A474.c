int __fastcall hs_ymdh(_DWORD *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  __int64 v4; // r0

  v4 = hs_now();
  return hs_date(v4, SHIDWORD(v4), a1, a2, a3, a4, 0, 0);
}
