bool __fastcall read_and_compare_fail_map(int a1, int a2, int a3)
{
  int v7; // [sp+10h] [bp-Ch] BYREF
  int v8; // [sp+14h] [bp-8h] BYREF

  return _isoc99_fscanf(a1, "%u %u", &v7, &v8) == 2 && a2 == v7 && a3 == v8;
}
