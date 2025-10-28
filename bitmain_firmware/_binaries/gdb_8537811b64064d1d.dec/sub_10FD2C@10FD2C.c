int __fastcall sub_10FD2C(int a1)
{
  int v1; // r4
  int v3; // r0
  _BYTE v4[20]; // [sp+4h] [bp-14h] BYREF

  v1 = a1;
  if ( sub_15DA6C(a1, &unk_3CFDEC) || sub_15DA6C(v1, &unk_3CFDCC) )
  {
    sub_92F8C(9, "cfa not available for record btrace target");
  }
  else
  {
    while ( sub_15DAB4(v1) == 2 )
      v1 = ((int (__fastcall *)(int))loc_15FAB0)(v1);
    if ( ((int (__fastcall *)(int))loc_160488)(v1) == 3 )
      goto LABEL_11;
    ((void (__fastcall *)(_BYTE *, int))loc_15CFC8)(v4, v1);
    if ( (v4[12] & 7) == 1 )
      return sub_15D8A0(v1);
  }
  sub_92F8C(9, "can't compute CFA for this frame: frame base not available");
LABEL_11:
  v3 = sub_92F8C(9, "can't compute CFA for this frame: required registers or memory are unavailable");
  return sub_10FDEC(v3);
}
