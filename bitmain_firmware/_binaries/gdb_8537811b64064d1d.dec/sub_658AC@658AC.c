int __fastcall sub_658AC(int a1, const char **a2, int a3)
{
  int v3; // r0
  int v4; // r4
  int v6; // r5
  int *v7; // r0
  int v8; // r0
  int v9; // [sp+4h] [bp-8h] BYREF

  if ( a3 != 1 )
    sub_94708("-remove-inferior should be passed a single argument");
  if ( sscanf(*a2, "i%d", &v9) != 1 )
    sub_94708("the thread group id is syntactically invalid");
  v3 = sub_183A20(v9);
  v4 = v3;
  if ( !v3 )
    sub_94708("the specified thread group does not exist");
  if ( *(_DWORD *)(v3 + 12) )
    sub_94708("cannot remove an active inferior");
  if ( v3 != sub_1836B0(v3) )
    return sub_18490C(v4);
  v6 = sub_183B60(sub_62ECC, 0);
  if ( !v6 )
    sub_94708("Cannot remove last inferior");
  ((void (*)(void))loc_1836C0)();
  if ( *(_DWORD *)(v6 + 12) && (v8 = ((int (*)(void))loc_23E758)()) != 0 )
    v7 = (int *)(v8 + 8);
  else
    v7 = &dword_475848;
  sub_23FA18(*v7, v7[1], v7[2]);
  ((void (__fastcall *)(_DWORD))loc_1CD2B8)(*(_DWORD *)(v6 + 36));
  return sub_18490C(v4);
}
