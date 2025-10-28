int __fastcall hs_ymd(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r0

  v3 = hs_now();
  return hs_date(v3, SHIDWORD(v3), a1, a2, a3, 0, 0, 0);
}
