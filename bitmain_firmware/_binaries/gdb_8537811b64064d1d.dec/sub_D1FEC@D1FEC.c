int __fastcall sub_D1FEC(int a1, int a2)
{
  const char *v4; // r6
  const char *v5; // r0

  v4 = (const char *)((int (__fastcall *)(_DWORD))loc_19D250)(*(_DWORD *)(a1 + 76));
  v5 = (const char *)((int (__fastcall *)(_DWORD))loc_19D250)(*(_DWORD *)(a1 + 84));
  sub_2594D8(a2, "break-range %s, %s", v4, v5);
  return sub_D1CB4(a1, a2);
}
