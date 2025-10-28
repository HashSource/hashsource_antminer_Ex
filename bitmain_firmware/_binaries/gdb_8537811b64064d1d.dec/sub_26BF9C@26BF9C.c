int __fastcall sub_26BF9C(int result, char a2)
{
  *(_BYTE *)(result + 4) = *(_BYTE *)(result + 4) & 0xF7 | (8 * (a2 & 1));
  return result;
}
