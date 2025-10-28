unsigned __int64 __fastcall sub_246EE4(unsigned __int64 a1, char a2)
{
  return (a1 >> a2) | (a1 << (-a2 & 0x3F));
}
