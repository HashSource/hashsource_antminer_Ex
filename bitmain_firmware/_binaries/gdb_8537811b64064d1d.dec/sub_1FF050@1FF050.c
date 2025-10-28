int __fastcall sub_1FF050(int a1)
{
  int v1; // r5
  int v3; // r0
  const char *v4; // r0
  const char *v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  if ( !sub_20DB9C(a1) )
    sub_94708("No default function now.");
  v1 = sub_20DBC4();
  if ( !sub_C37E0(v1, &v5, 0, 0) )
  {
    v3 = sub_B8974(0);
    v4 = (const char *)sub_25ACB4(v3, v1);
    sub_94708("No function found containing current program point %s.", v4);
  }
  return sub_1FEED0(v5);
}
