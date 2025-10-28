int __fastcall sub_238E60(int a1, int a2)
{
  int v3; // r3
  int v5; // r1
  int result; // r0

  v3 = *(_DWORD *)(a1 + 36);
  v5 = *(_DWORD *)(a2 + 28);
  if ( v5 < v3 )
  {
    sub_259880("ERROR: \"regnum\" attribute %ld ", v5);
    sub_259880("is not the largest number (%d).\n", *(_DWORD *)(a1 + 36));
    sub_94708("\"regnum\" attribute %ld is not the largest number (%d).", *(_DWORD *)(a2 + 28), *(_DWORD *)(a1 + 36));
  }
  if ( v5 > v3 )
  {
    sub_259880("  regnum = %ld;\n", v5);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 28);
  }
  sub_259880("  tdesc_create_reg (feature, \"%s\", regnum++, %d, ", *(const char **)(a2 + 4), *(_DWORD *)(a2 + 32));
  if ( *(_DWORD *)(a2 + 40) )
    sub_259880("\"%s\", ", *(const char **)(a2 + 36));
  else
    sub_259880("NULL, ");
  result = sub_259880("%d, \"%s\");\n", *(_DWORD *)(a2 + 60), *(const char **)(a2 + 64));
  ++*(_DWORD *)(a1 + 36);
  return result;
}
