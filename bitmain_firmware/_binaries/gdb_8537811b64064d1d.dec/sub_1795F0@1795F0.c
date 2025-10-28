bool __fastcall sub_1795F0(_DWORD *a1, _DWORD *a2)
{
  int v4; // r8
  __int64 v5; // r6
  int v6; // r5

  v4 = ((int (__fastcall *)(_DWORD))loc_26C0C4)(*a1);
  v5 = sub_26C008(*a1) + (unsigned int)v4;
  v6 = ((int (__fastcall *)(_DWORD))loc_26C0C4)(*a2);
  return sub_26C008(*a2) + (unsigned int)v6 == v5;
}
