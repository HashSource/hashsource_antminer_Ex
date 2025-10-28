int __fastcall sub_1D4EF0(int *a1)
{
  int v1; // r3
  unsigned int *v3; // r5
  int v4; // r0

  v1 = a1[77];
  if ( !v1 )
    return 0;
  v3 = (unsigned int *)((int (__fastcall *)(int))loc_E16D4)(v1);
  if ( v3 && (v4 = sub_183AB0(a1[2], a1[3], a1[4])) != 0 )
    return sub_1D3BA0(*(_DWORD *)(v4 + 32), *v3, a1 + 78);
  else
    return 0;
}
