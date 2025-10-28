bool __fastcall sub_1795A4(_DWORD *a1, _DWORD *a2)
{
  int v4; // r5
  __int64 v5; // r0
  unsigned int v6; // r5
  int v7; // r4

  v4 = ((int (__fastcall *)(_DWORD))loc_26C0C4)(*a1);
  v5 = sub_26C008(*a1);
  v6 = v4 + v5;
  v7 = ((int (__fastcall *)(_DWORD, _DWORD))loc_26C0C4)(*a2, HIDWORD(v5));
  return v6 < v7 + (unsigned int)sub_26C008(*a2);
}
