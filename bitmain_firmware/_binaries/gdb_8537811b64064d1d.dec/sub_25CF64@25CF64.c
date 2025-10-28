int __fastcall sub_25CF64(int a1)
{
  bool v1; // zf

  v1 = a1 == 33;
  if ( a1 != 33 )
    v1 = a1 == 21;
  if ( !v1 )
    JUMPOUT(0x25CA38);
  return 0;
}
