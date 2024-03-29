/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_ajout_client (void)
{
  GtkWidget *ajout_client;
  GtkWidget *fixed1;
  GtkWidget *entry100;
  GtkWidget *entry101;
  GtkWidget *entry103;
  GtkWidget *entry104;
  GtkWidget *entry105;
  GtkWidget *image3;
  GtkWidget *label104;
  GtkWidget *label102;
  GtkWidget *label105;
  GtkWidget *label106;
  GtkWidget *label101;
  GtkWidget *afficher_treeview1;
  GtkWidget *alignment2;
  GtkWidget *hbox1;
  GtkWidget *image4;
  GtkWidget *label117;
  GtkWidget *ajouter_reclamation;
  GtkWidget *alignment3;
  GtkWidget *hbox2;
  GtkWidget *image5;
  GtkWidget *label118;
  GtkWidget *retourw1;
  GtkWidget *alignment4;
  GtkWidget *hbox3;
  GtkWidget *image6;
  GtkWidget *label119;
  GtkWidget *label112;
  GtkWidget *label100;

  ajout_client = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ajout_client), _("ajout_client"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ajout_client), fixed1);

  entry100 = gtk_entry_new ();
  gtk_widget_show (entry100);
  gtk_fixed_put (GTK_FIXED (fixed1), entry100, 200, 80);
  gtk_widget_set_size_request (entry100, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry100), 8226);

  entry101 = gtk_entry_new ();
  gtk_widget_show (entry101);
  gtk_fixed_put (GTK_FIXED (fixed1), entry101, 200, 136);
  gtk_widget_set_size_request (entry101, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry101), 8226);

  entry103 = gtk_entry_new ();
  gtk_widget_show (entry103);
  gtk_fixed_put (GTK_FIXED (fixed1), entry103, 200, 192);
  gtk_widget_set_size_request (entry103, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry103), 8226);

  entry104 = gtk_entry_new ();
  gtk_widget_show (entry104);
  gtk_fixed_put (GTK_FIXED (fixed1), entry104, 200, 248);
  gtk_widget_set_size_request (entry104, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry104), 8226);

  entry105 = gtk_entry_new ();
  gtk_widget_show (entry105);
  gtk_fixed_put (GTK_FIXED (fixed1), entry105, 200, 312);
  gtk_widget_set_size_request (entry105, 300, 100);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry105), 8226);

  image3 = create_pixmap (ajout_client, "index.jpeg");
  gtk_widget_show (image3);
  gtk_fixed_put (GTK_FIXED (fixed1), image3, 120, 560);
  gtk_widget_set_size_request (image3, 288, 176);

  label104 = gtk_label_new (_("<span foreground=\"black\" background=\"white\"><b>DATE RECLAMATION</b></span>\n"));
  gtk_widget_show (label104);
  gtk_fixed_put (GTK_FIXED (fixed1), label104, 8, 192);
  gtk_widget_set_size_request (label104, 168, 24);
  gtk_label_set_use_markup (GTK_LABEL (label104), TRUE);

  label102 = gtk_label_new (_("<span foreground=\"black\" background=\"white\"><b>ID_RECLAMATION</b></span>"));
  gtk_widget_show (label102);
  gtk_fixed_put (GTK_FIXED (fixed1), label102, 0, 136);
  gtk_widget_set_size_request (label102, 160, 17);
  gtk_label_set_use_markup (GTK_LABEL (label102), TRUE);

  label105 = gtk_label_new (_("<span foreground=\"black\" background=\"white\"><b>PRESTATION</b></span>\n"));
  gtk_widget_show (label105);
  gtk_fixed_put (GTK_FIXED (fixed1), label105, 8, 248);
  gtk_widget_set_size_request (label105, 104, 17);
  gtk_label_set_use_markup (GTK_LABEL (label105), TRUE);

  label106 = gtk_label_new (_("<span foreground=\"black\" background=\"white\"><b>RECLAMATION</b></span>\n"));
  gtk_widget_show (label106);
  gtk_fixed_put (GTK_FIXED (fixed1), label106, 16, 304);
  gtk_widget_set_size_request (label106, 116, 17);
  gtk_label_set_use_markup (GTK_LABEL (label106), TRUE);

  label101 = gtk_label_new_with_mnemonic (_("<span foreground=\"black\" background=\"white\"><b>L'IDENTIFIANT DU DEVIS A PAYER</b></span>\n"));
  gtk_widget_show (label101);
  gtk_fixed_put (GTK_FIXED (fixed1), label101, 16, 88);
  gtk_widget_set_size_request (label101, 184, 16);
  gtk_label_set_use_markup (GTK_LABEL (label101), TRUE);

  afficher_treeview1 = gtk_button_new ();
  gtk_widget_show (afficher_treeview1);
  gtk_fixed_put (GTK_FIXED (fixed1), afficher_treeview1, 200, 432);
  gtk_widget_set_size_request (afficher_treeview1, 80, 29);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (afficher_treeview1), alignment2);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox1);

  image4 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox1), image4, FALSE, FALSE, 0);

  label117 = gtk_label_new_with_mnemonic (_("afficher"));
  gtk_widget_show (label117);
  gtk_box_pack_start (GTK_BOX (hbox1), label117, FALSE, FALSE, 0);

  ajouter_reclamation = gtk_button_new ();
  gtk_widget_show (ajouter_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed1), ajouter_reclamation, 288, 432);
  gtk_widget_set_size_request (ajouter_reclamation, 80, 29);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (ajouter_reclamation), alignment3);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox2);

  image5 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox2), image5, FALSE, FALSE, 0);

  label118 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label118);
  gtk_box_pack_start (GTK_BOX (hbox2), label118, FALSE, FALSE, 0);

  retourw1 = gtk_button_new ();
  gtk_widget_show (retourw1);
  gtk_fixed_put (GTK_FIXED (fixed1), retourw1, 384, 432);
  gtk_widget_set_size_request (retourw1, 80, 29);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (retourw1), alignment4);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox3);

  image6 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox3), image6, FALSE, FALSE, 0);

  label119 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label119);
  gtk_box_pack_start (GTK_BOX (hbox3), label119, FALSE, FALSE, 0);

  label112 = gtk_label_new ("");
  gtk_widget_show (label112);
  gtk_fixed_put (GTK_FIXED (fixed1), label112, 40, 472);
  gtk_widget_set_size_request (label112, 456, 64);

  label100 = gtk_label_new_with_mnemonic (_("<span size=\"xx-large\" foreground=\"blue\" background=\"white\"style =\"italic\"><b><u>RECLAMATION</u></b></span>\n"));
  gtk_widget_show (label100);
  gtk_fixed_put (GTK_FIXED (fixed1), label100, 168, 16);
  gtk_widget_set_size_request (label100, 232, 40);
  gtk_label_set_use_markup (GTK_LABEL (label100), TRUE);

  g_signal_connect ((gpointer) afficher_treeview1, "clicked",
                    G_CALLBACK (on_afficher_treeview1_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter_reclamation, "clicked",
                    G_CALLBACK (on_ajouter_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) retourw1, "clicked",
                    G_CALLBACK (on_retourw1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajout_client, ajout_client, "ajout_client");
  GLADE_HOOKUP_OBJECT (ajout_client, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ajout_client, entry100, "entry100");
  GLADE_HOOKUP_OBJECT (ajout_client, entry101, "entry101");
  GLADE_HOOKUP_OBJECT (ajout_client, entry103, "entry103");
  GLADE_HOOKUP_OBJECT (ajout_client, entry104, "entry104");
  GLADE_HOOKUP_OBJECT (ajout_client, entry105, "entry105");
  GLADE_HOOKUP_OBJECT (ajout_client, image3, "image3");
  GLADE_HOOKUP_OBJECT (ajout_client, label104, "label104");
  GLADE_HOOKUP_OBJECT (ajout_client, label102, "label102");
  GLADE_HOOKUP_OBJECT (ajout_client, label105, "label105");
  GLADE_HOOKUP_OBJECT (ajout_client, label106, "label106");
  GLADE_HOOKUP_OBJECT (ajout_client, label101, "label101");
  GLADE_HOOKUP_OBJECT (ajout_client, afficher_treeview1, "afficher_treeview1");
  GLADE_HOOKUP_OBJECT (ajout_client, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (ajout_client, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (ajout_client, image4, "image4");
  GLADE_HOOKUP_OBJECT (ajout_client, label117, "label117");
  GLADE_HOOKUP_OBJECT (ajout_client, ajouter_reclamation, "ajouter_reclamation");
  GLADE_HOOKUP_OBJECT (ajout_client, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (ajout_client, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (ajout_client, image5, "image5");
  GLADE_HOOKUP_OBJECT (ajout_client, label118, "label118");
  GLADE_HOOKUP_OBJECT (ajout_client, retourw1, "retourw1");
  GLADE_HOOKUP_OBJECT (ajout_client, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (ajout_client, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (ajout_client, image6, "image6");
  GLADE_HOOKUP_OBJECT (ajout_client, label119, "label119");
  GLADE_HOOKUP_OBJECT (ajout_client, label112, "label112");
  GLADE_HOOKUP_OBJECT (ajout_client, label100, "label100");

  return ajout_client;
}

GtkWidget*
create_affichage_client (void)
{
  GtkWidget *affichage_client;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkWidget *entry106;
  GtkWidget *image2;
  GtkWidget *label108;
  GtkWidget *label113;
  GtkWidget *recherche_reclamation;
  GtkWidget *alignment5;
  GtkWidget *hbox4;
  GtkWidget *image7;
  GtkWidget *label120;
  GtkWidget *retour1_reclamation;
  GtkWidget *alignment6;
  GtkWidget *hbox5;
  GtkWidget *image8;
  GtkWidget *label121;
  GtkWidget *supprimer;
  GtkWidget *alignment7;
  GtkWidget *hbox6;
  GtkWidget *image9;
  GtkWidget *label122;
  GtkWidget *label115;

  affichage_client = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (affichage_client, 550, 600);
  gtk_window_set_title (GTK_WINDOW (affichage_client), _("affichage_client"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (affichage_client), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 152, 64);
  gtk_widget_set_size_request (treeview1, 296, 192);

  entry106 = gtk_entry_new ();
  gtk_widget_show (entry106);
  gtk_fixed_put (GTK_FIXED (fixed2), entry106, 192, 328);
  gtk_widget_set_size_request (entry106, 136, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry106), 8226);

  image2 = create_pixmap (affichage_client, "index.jpeg");
  gtk_widget_show (image2);
  gtk_fixed_put (GTK_FIXED (fixed2), image2, 112, 416);
  gtk_widget_set_size_request (image2, 344, 176);

  label108 = gtk_label_new_with_mnemonic (_("<span foreground=\"black\" background=\"white\"><b>ID RECLAMATION:</b></span>"));
  gtk_widget_show (label108);
  gtk_fixed_put (GTK_FIXED (fixed2), label108, 40, 329);
  gtk_widget_set_size_request (label108, 144, 16);
  gtk_label_set_use_markup (GTK_LABEL (label108), TRUE);

  label113 = gtk_label_new ("");
  gtk_widget_show (label113);
  gtk_fixed_put (GTK_FIXED (fixed2), label113, 80, 368);
  gtk_widget_set_size_request (label113, 360, 32);

  recherche_reclamation = gtk_button_new ();
  gtk_widget_show (recherche_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), recherche_reclamation, 208, 264);
  gtk_widget_set_size_request (recherche_reclamation, 96, 29);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (recherche_reclamation), alignment5);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox4);

  image7 = gtk_image_new_from_stock ("gtk-about", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox4), image7, FALSE, FALSE, 0);

  label120 = gtk_label_new_with_mnemonic (_("recherche"));
  gtk_widget_show (label120);
  gtk_box_pack_start (GTK_BOX (hbox4), label120, FALSE, FALSE, 0);

  retour1_reclamation = gtk_button_new ();
  gtk_widget_show (retour1_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed2), retour1_reclamation, 312, 264);
  gtk_widget_set_size_request (retour1_reclamation, 88, 32);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (retour1_reclamation), alignment6);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox5);

  image8 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox5), image8, FALSE, FALSE, 0);

  label121 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label121);
  gtk_box_pack_start (GTK_BOX (hbox5), label121, FALSE, FALSE, 0);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimer, 344, 328);
  gtk_widget_set_size_request (supprimer, 104, 29);
  gtk_button_set_focus_on_click (GTK_BUTTON (supprimer), FALSE);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment7);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox6);

  image9 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox6), image9, FALSE, FALSE, 0);

  label122 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label122);
  gtk_box_pack_start (GTK_BOX (hbox6), label122, FALSE, FALSE, 0);

  label115 = gtk_label_new_with_mnemonic (_("<span size=\"xx-large\" foreground=\"blue\" background=\"white\"style =\"italic\"><b><u>MES RECLAMATIONS</u></b></span>\n"));
  gtk_widget_show (label115);
  gtk_fixed_put (GTK_FIXED (fixed2), label115, 168, 0);
  gtk_widget_set_size_request (label115, 264, 56);
  gtk_label_set_use_markup (GTK_LABEL (label115), TRUE);

  g_signal_connect ((gpointer) recherche_reclamation, "clicked",
                    G_CALLBACK (on_recherche_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour1_reclamation, "clicked",
                    G_CALLBACK (on_retour1_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);

  gtk_label_set_mnemonic_widget (GTK_LABEL (label108), entry106);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (affichage_client, affichage_client, "affichage_client");
  GLADE_HOOKUP_OBJECT (affichage_client, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (affichage_client, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (affichage_client, entry106, "entry106");
  GLADE_HOOKUP_OBJECT (affichage_client, image2, "image2");
  GLADE_HOOKUP_OBJECT (affichage_client, label108, "label108");
  GLADE_HOOKUP_OBJECT (affichage_client, label113, "label113");
  GLADE_HOOKUP_OBJECT (affichage_client, recherche_reclamation, "recherche_reclamation");
  GLADE_HOOKUP_OBJECT (affichage_client, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (affichage_client, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (affichage_client, image7, "image7");
  GLADE_HOOKUP_OBJECT (affichage_client, label120, "label120");
  GLADE_HOOKUP_OBJECT (affichage_client, retour1_reclamation, "retour1_reclamation");
  GLADE_HOOKUP_OBJECT (affichage_client, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (affichage_client, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (affichage_client, image8, "image8");
  GLADE_HOOKUP_OBJECT (affichage_client, label121, "label121");
  GLADE_HOOKUP_OBJECT (affichage_client, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (affichage_client, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (affichage_client, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (affichage_client, image9, "image9");
  GLADE_HOOKUP_OBJECT (affichage_client, label122, "label122");
  GLADE_HOOKUP_OBJECT (affichage_client, label115, "label115");

  return affichage_client;
}

GtkWidget*
create_afficher1_une_reclamation (void)
{
  GtkWidget *afficher1_une_reclamation;
  GtkWidget *fixed3;
  GtkWidget *entry107;
  GtkWidget *entry108;
  GtkWidget *image1;
  GtkWidget *label109;
  GtkWidget *label111;
  GtkWidget *frame1;
  GtkWidget *alignment1;
  GtkWidget *label116;
  GtkWidget *label110;
  GtkWidget *rechercher2_reclamation;
  GtkWidget *alignment8;
  GtkWidget *hbox7;
  GtkWidget *image10;
  GtkWidget *label123;
  GtkWidget *modifier;
  GtkWidget *alignment9;
  GtkWidget *hbox8;
  GtkWidget *image11;
  GtkWidget *label124;
  GtkWidget *label114;
  GtkWidget *retour2_reclamation;
  GtkWidget *alignment10;
  GtkWidget *hbox9;
  GtkWidget *image12;
  GtkWidget *label125;

  afficher1_une_reclamation = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (afficher1_une_reclamation), _("afficher1_une_reclamation"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (afficher1_une_reclamation), fixed3);

  entry107 = gtk_entry_new ();
  gtk_widget_show (entry107);
  gtk_fixed_put (GTK_FIXED (fixed3), entry107, 272, 8);
  gtk_widget_set_size_request (entry107, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry107), 8226);

  entry108 = gtk_entry_new ();
  gtk_widget_show (entry108);
  gtk_fixed_put (GTK_FIXED (fixed3), entry108, 120, 224);
  gtk_widget_set_size_request (entry108, 416, 100);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry108), 8226);

  image1 = create_pixmap (afficher1_une_reclamation, "index.jpeg");
  gtk_widget_show (image1);
  gtk_fixed_put (GTK_FIXED (fixed3), image1, 128, 416);
  gtk_widget_set_size_request (image1, 344, 176);

  label109 = gtk_label_new_with_mnemonic (_("<span foreground=\"black\" background=\"white\"><b>ID RECLAMATION: </b></span>"));
  gtk_widget_show (label109);
  gtk_fixed_put (GTK_FIXED (fixed3), label109, 112, 9);
  gtk_widget_set_size_request (label109, 153, 16);
  gtk_label_set_use_markup (GTK_LABEL (label109), TRUE);

  label111 = gtk_label_new_with_mnemonic (_("<span foreground=\"black\" background=\"white\"><b>MODIFICATION:</b></span>"));
  gtk_widget_show (label111);
  gtk_fixed_put (GTK_FIXED (fixed3), label111, 16, 208);
  gtk_widget_set_size_request (label111, 136, 16);
  gtk_label_set_use_markup (GTK_LABEL (label111), TRUE);

  frame1 = gtk_frame_new (NULL);
  gtk_widget_show (frame1);
  gtk_fixed_put (GTK_FIXED (fixed3), frame1, 48, 56);
  gtk_widget_set_size_request (frame1, 520, 120);
  gtk_frame_set_shadow_type (GTK_FRAME (frame1), GTK_SHADOW_NONE);

  alignment1 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (frame1), alignment1);
  gtk_alignment_set_padding (GTK_ALIGNMENT (alignment1), 0, 0, 12, 0);

  label116 = gtk_label_new (_("<span foreground=\"black\" background=\"white\"><b>RECLAMATION:</b></span>"));
  gtk_widget_show (label116);
  gtk_frame_set_label_widget (GTK_FRAME (frame1), label116);
  gtk_label_set_use_markup (GTK_LABEL (label116), TRUE);

  label110 = gtk_label_new ("");
  gtk_widget_show (label110);
  gtk_fixed_put (GTK_FIXED (fixed3), label110, 64, 72);
  gtk_widget_set_size_request (label110, 504, 96);

  rechercher2_reclamation = gtk_button_new ();
  gtk_widget_show (rechercher2_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed3), rechercher2_reclamation, 432, 8);
  gtk_widget_set_size_request (rechercher2_reclamation, 104, 29);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (rechercher2_reclamation), alignment8);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox7);

  image10 = gtk_image_new_from_stock ("gtk-about", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox7), image10, FALSE, FALSE, 0);

  label123 = gtk_label_new_with_mnemonic (_("rechercher"));
  gtk_widget_show (label123);
  gtk_box_pack_start (GTK_BOX (hbox7), label123, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed3), modifier, 360, 328);
  gtk_widget_set_size_request (modifier, 88, 32);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (modifier), alignment9);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox8);

  image11 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox8), image11, FALSE, FALSE, 0);

  label124 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label124);
  gtk_box_pack_start (GTK_BOX (hbox8), label124, FALSE, FALSE, 0);

  label114 = gtk_label_new ("");
  gtk_widget_show (label114);
  gtk_fixed_put (GTK_FIXED (fixed3), label114, 96, 360);
  gtk_widget_set_size_request (label114, 448, 32);

  retour2_reclamation = gtk_button_new ();
  gtk_widget_show (retour2_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed3), retour2_reclamation, 448, 328);
  gtk_widget_set_size_request (retour2_reclamation, 72, 32);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (retour2_reclamation), alignment10);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox9);

  image12 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox9), image12, FALSE, FALSE, 0);

  label125 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label125);
  gtk_box_pack_start (GTK_BOX (hbox9), label125, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) rechercher2_reclamation, "clicked",
                    G_CALLBACK (on_rechercher2_reclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour2_reclamation, "clicked",
                    G_CALLBACK (on_retour2_reclamation_clicked),
                    NULL);

  gtk_label_set_mnemonic_widget (GTK_LABEL (label109), entry107);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (afficher1_une_reclamation, afficher1_une_reclamation, "afficher1_une_reclamation");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, entry107, "entry107");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, entry108, "entry108");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, image1, "image1");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label109, "label109");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label111, "label111");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, frame1, "frame1");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label116, "label116");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label110, "label110");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, rechercher2_reclamation, "rechercher2_reclamation");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, image10, "image10");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label123, "label123");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, image11, "image11");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label124, "label124");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label114, "label114");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, retour2_reclamation, "retour2_reclamation");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, image12, "image12");
  GLADE_HOOKUP_OBJECT (afficher1_une_reclamation, label125, "label125");

  return afficher1_une_reclamation;
}

GtkWidget*
create_w1 (void)
{
  GtkWidget *w1;
  GtkWidget *fixed4;
  GtkWidget *mesreclamation;
  GtkWidget *alignment11;
  GtkWidget *hbox10;
  GtkWidget *image13;
  GtkWidget *label126;
  GtkWidget *ajout_reclamation;
  GtkWidget *alignment12;
  GtkWidget *hbox11;
  GtkWidget *image14;
  GtkWidget *label127;

  w1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (w1, 400, 300);
  gtk_window_set_title (GTK_WINDOW (w1), _("w1"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (w1), fixed4);

  mesreclamation = gtk_button_new ();
  gtk_widget_show (mesreclamation);
  gtk_fixed_put (GTK_FIXED (fixed4), mesreclamation, 112, 64);
  gtk_widget_set_size_request (mesreclamation, 176, 48);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (mesreclamation), alignment11);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox10);

  image13 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox10), image13, FALSE, FALSE, 0);

  label126 = gtk_label_new_with_mnemonic (_("Mes reclamations"));
  gtk_widget_show (label126);
  gtk_box_pack_start (GTK_BOX (hbox10), label126, FALSE, FALSE, 0);

  ajout_reclamation = gtk_button_new ();
  gtk_widget_show (ajout_reclamation);
  gtk_fixed_put (GTK_FIXED (fixed4), ajout_reclamation, 112, 152);
  gtk_widget_set_size_request (ajout_reclamation, 176, 48);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (ajout_reclamation), alignment12);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox11);

  image14 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox11), image14, FALSE, FALSE, 0);

  label127 = gtk_label_new_with_mnemonic (_("Nouvelle reclamation"));
  gtk_widget_show (label127);
  gtk_box_pack_start (GTK_BOX (hbox11), label127, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) mesreclamation, "clicked",
                    G_CALLBACK (on_mesreclamation_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajout_reclamation, "clicked",
                    G_CALLBACK (on_ajout_reclamation_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (w1, w1, "w1");
  GLADE_HOOKUP_OBJECT (w1, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (w1, mesreclamation, "mesreclamation");
  GLADE_HOOKUP_OBJECT (w1, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (w1, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (w1, image13, "image13");
  GLADE_HOOKUP_OBJECT (w1, label126, "label126");
  GLADE_HOOKUP_OBJECT (w1, ajout_reclamation, "ajout_reclamation");
  GLADE_HOOKUP_OBJECT (w1, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (w1, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (w1, image14, "image14");
  GLADE_HOOKUP_OBJECT (w1, label127, "label127");

  return w1;
}

