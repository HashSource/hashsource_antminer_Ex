int __fastcall sub_293B14(void *a1)
{
  void *v1; // r6
  int result; // r0

  v1 = off_46DED0;
  off_46DED0 = a1;
  sub_289B4C((unsigned __int8 *)dword_48BAA8, (int (*)())sub_29750C);
  sub_289B4C((unsigned __int8 *)dword_48BAAC, (int (*)())sub_29760C);
  sub_289B4C((unsigned __int8 *)dword_48BAB0, (int (*)())sub_295430);
  sub_289B4C((unsigned __int8 *)dword_48BAB4, (int (*)())sub_295374);
  sub_289B4C((unsigned __int8 *)dword_48BAB8, (int (*)())sub_2954F8);
  sub_289B4C((unsigned __int8 *)dword_48BABC, (int (*)())sub_295510);
  result = sub_289B4C((unsigned __int8 *)dword_48BAC0, sub_295CC4);
  off_46DED0 = v1;
  return result;
}
