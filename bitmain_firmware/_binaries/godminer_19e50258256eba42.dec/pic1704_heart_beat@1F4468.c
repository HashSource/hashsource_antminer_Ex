int __fastcall pic1704_heart_beat(char a1)
{
  int v2; // [sp+Ch] [bp-20h] BYREF
  __int16 v3; // [sp+10h] [bp-1Ch]
  int v4; // [sp+14h] [bp-18h] BYREF
  __int16 v5; // [sp+18h] [bp-14h]
  int v6; // [sp+1Ch] [bp-10h]
  int v7; // [sp+20h] [bp-Ch]

  v4 = 0;
  v5 = 0;
  v2 = 255;
  v3 = 0;
  LOWORD(v6) = 22;
  v7 = 0;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 6;
  return (unsigned __int8)sub_1F3C40(v6, 0, &v4, (unsigned __int8 *)&v2);
}
