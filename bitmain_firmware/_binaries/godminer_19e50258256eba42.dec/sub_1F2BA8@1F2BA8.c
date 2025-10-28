bool __fastcall sub_1F2BA8(int a1, char a2, unsigned __int8 a3)
{
  char v3; // r0
  char v5; // r0
  _BYTE v10[8]; // [sp+10h] [bp-Ch] BYREF

  v10[0] = a3;
  v3 = sub_1F21D0(a2);
  if ( !sub_1F2A74(a1, v3, 0, v10, 1u) )
    return 0;
  v5 = sub_1F21D0(a2);
  return sub_1F2B18(a1, v5, 0, v10, 1u) && a3 == v10[0];
}
