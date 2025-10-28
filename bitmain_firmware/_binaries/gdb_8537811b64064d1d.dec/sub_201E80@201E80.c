int __fastcall sub_201E80(int a1)
{
  int v1; // r0
  int result; // r0
  int (*v3)(void); // r3

  v1 = sub_16F67C(a1);
  result = ((int (__fastcall *)(int, int))loc_16ECB0)(v1, dword_4893A0);
  v3 = *(int (**)(void))(*(_DWORD *)result + 52);
  if ( v3 )
    return v3();
  return result;
}
