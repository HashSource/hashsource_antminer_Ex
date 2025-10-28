int __fastcall sub_232088(int a1)
{
  int v2; // r0
  int v3; // r1

  if ( (a1 & 1) != 0 )
  {
    v2 = sub_32727C("TARGET_WNOHANG");
    v3 = v2;
    if ( (a1 & 0xFFFFFFFE) != 0 )
      return sub_31E360(v2, v2, ", ", "unknown???", 0);
    return v3;
  }
  else if ( a1 )
  {
    return sub_32727C("unknown???");
  }
  else
  {
    return sub_32727C("");
  }
}
