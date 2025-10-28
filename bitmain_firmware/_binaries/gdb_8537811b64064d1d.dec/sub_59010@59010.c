int __fastcall sub_59010(int a1)
{
  int v2; // r5
  int *v3; // r4
  int v4; // r0
  int v5; // r5
  int result; // r0

  v2 = sub_1915B0(dword_487668, "console");
  v3 = (int *)sub_243004(v2);
  v4 = sub_19168C(v2);
  v5 = *v3;
  *v3 = v4;
  result = sub_58C84(a1);
  *v3 = v5;
  return result;
}
