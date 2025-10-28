int sub_231A34()
{
  int result; // r0
  int v1; // r0
  int v2; // [sp+4h] [bp-10h] BYREF
  __int64 v3; // [sp+8h] [bp-Ch]

  v2 = dword_4878EC;
  v3 = qword_4878F0;
  dword_4878EC = dword_475848;
  qword_4878F0 = qword_47584C;
  sub_CDD40();
  if ( !sub_98FA0(&v2, &dword_475848) )
  {
    v1 = ps_getpid_0((int)&v2);
    sub_183878(v1);
  }
  sub_DB384(2);
  sub_1DDD1C();
  sub_FA48C();
  result = sub_15D7A0();
  if ( off_48A56C )
    return off_48A56C(result);
  return result;
}
