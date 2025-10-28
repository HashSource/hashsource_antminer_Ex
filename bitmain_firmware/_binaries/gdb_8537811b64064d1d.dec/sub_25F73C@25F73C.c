int __fastcall sub_25F73C(_DWORD *a1, int a2, int a3)
{
  int v6; // r5

  if ( **(_BYTE **)(sub_171280(a1) + 24) == 10 )
    sub_94708("Attempt to dereference a generic pointer.");
  v6 = sub_26DD58(a1, 0, a2);
  if ( !a3 )
    ((void (*)(void))loc_26E034)();
  return v6;
}
