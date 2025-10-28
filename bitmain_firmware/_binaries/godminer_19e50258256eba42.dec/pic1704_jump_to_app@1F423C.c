int __fastcall pic1704_jump_to_app(char a1)
{
  __int16 v2; // [sp+8h] [bp-1Ch] BYREF
  int v3; // [sp+Ch] [bp-18h] BYREF
  __int16 v4; // [sp+10h] [bp-14h]
  int v5; // [sp+14h] [bp-10h]
  int v6; // [sp+18h] [bp-Ch]

  v3 = 0;
  v4 = 0;
  v2 = 255;
  LOWORD(v5) = 6;
  v6 = 0;
  HIBYTE(v5) = a1;
  BYTE2(v5) = 2;
  return (unsigned __int8)sub_1F3C40(v5, 0, &v3, (unsigned __int8 *)&v2);
}
