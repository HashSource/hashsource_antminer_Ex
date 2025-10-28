int __fastcall sub_25CF84(int a1, int a2, int a3)
{
  bool v5; // zf

  sub_26BC98(a2);
  sub_26BC98(a3);
  v5 = a1 == 33;
  if ( a1 != 33 )
    v5 = a1 == 21;
  if ( !v5 )
    JUMPOUT(0x25CA38);
  return 0;
}
