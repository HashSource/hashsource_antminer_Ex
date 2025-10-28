int sub_237314()
{
  int v0; // r0

  dword_48A4B4 = (int)sub_16EBE0((int)sub_234F70);
  sub_53420(
    "tdesc",
    11,
    (int)sub_234F28,
    (int)"Set target description specific variables.",
    &dword_48A4BC,
    (int)"set tdesc ",
    0,
    (int **)&dword_47475C);
  sub_53420(
    "tdesc",
    11,
    (int)sub_234F58,
    (int)"Show target description specific variables.",
    &dword_48A4C0,
    (int)"show tdesc ",
    0,
    (int **)&dword_47474C);
  sub_53420(
    "tdesc",
    11,
    (int)sub_234EF8,
    (int)"Unset target description specific variables.",
    &dword_48A4B8,
    (int)"unset tdesc ",
    0,
    (int **)&dword_474794);
  sub_53648(
    "filename",
    10,
    (int)&dword_48A4D0,
    "Set the file to read for an XML target description",
    "Show the file to read for an XML target description",
    "When set, GDB will read the target description from a local\nfile instead of querying the remote target.",
    (int)sub_235F6C,
    (int)&loc_234E94,
    (int **)&dword_48A4BC,
    (int **)&dword_48A4C0);
  sub_5329C(
    "filename",
    10,
    (int)sub_235EF4,
    (int)"Unset the file to read for an XML target description.  When unset,\n"
         "GDB will read the description from the target.",
    (int **)&dword_48A4B8);
  sub_5329C(
    "c-tdesc",
    11,
    (int)sub_23664C,
    (int)"Print the current target description as a C source file.",
    (int **)&dword_474784);
  v0 = sub_5329C(
         "xml-descriptions",
         11,
         (int)sub_235460,
         (int)"Check the target descriptions created in GDB equal the descriptions\n"
              "created from XML files in the directory.\n"
              "The parameter is the directory name.",
         (int **)&dword_474780);
  return sub_53274(v0, 1010984);
}
