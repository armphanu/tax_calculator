#include <gtk/gtk.h>
#include <stdlib.h>

GtkWidget *g_lbl_display;
GtkWidget *g_lbl_display2;
GtkWidget *g_lbl_display3;

static int numshow = 1;
static int ans = 0;
static int tans = 0;
// static void on_btn_answer_clicked (GtkButton*, GtkWidget*);

int main(int argc, char *argv[])
{
    GtkBuilder      *builder; 
    GtkWidget       *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "main_display.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_display"));
    gtk_builder_connect_signals(builder, NULL);
    
    // // get pointers to the two labels
    // g_lbl_display = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_display"));

    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();

    return 0;
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_zero_clicked()
{
    ans = (numshow * ans)+0;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_one_clicked()
{
    ans = (numshow * ans)+1;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_two_clicked()
{
    ans = (numshow * ans)+2;
    char str_num[100] = {0};
    sprintf(str_num, "%d", ans);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_three_clicked()
{
    ans = (numshow * ans)+3;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_four_clicked()
{
    ans = (numshow * ans)+4;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_five_clicked()
{
    ans = (numshow * ans)+5;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_six_clicked()
{
    ans = (numshow * ans)+6;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_seven_clicked()
{
    ans = (numshow * ans)+7;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_eight_clicked()
{
    ans = (numshow * ans)+8;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_nine_clicked()
{
    ans = (numshow * ans)+9;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

G_MODULE_EXPORT void on_btn_clear_clicked()
{
    gtk_label_set_text(GTK_LABEL(g_lbl_display), "0");
    numshow = 1;
    ans = 0;
}

G_MODULE_EXPORT void on_btn_answer_clicked()
{
    if(ans*0.5 > 100000)
    {
        ans -= 100000;
    }
    else{
        ans -= ans*0.5;
    }
    if(ans <= 150000)
    {
        ans = 0;
    }
    else if(ans > 150000 && ans <= 300000)
    {
        ans = (ans-150000)*0.05;
    }
    else if(ans > 300000 && ans <= 500000)
    {
        ans = (ans-150000)*0.1;
    }
    else if(ans > 500000 && ans <= 750000)
    {
        ans = (ans-150000)*0.15;
    }
    else if(ans > 750000 && ans <= 1000000)
    {
        ans = (ans-150000)*0.2;
    }
    else if(ans > 1000000 && ans <= 2000000)
    {
        ans = (ans-150000)*0.25;
    }
    else if(ans > 2000000 && ans <= 5000000)
    {
        ans = (ans-150000)*0.3;
    }
    else if(ans > 5000000)
    {
        ans = (ans-150000)*0.35;
    }
    tans = ans;
    char str_num[100];
    itoa(tans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display), str_num);

}


G_MODULE_EXPORT void on_btn_tax1_clicked()
{
    GtkBuilder      *builder; 
    GtkWidget       *window;

    numshow = 1;
    ans = 0;

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "window_main.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);
    
    // get pointers to the two labels
    g_lbl_display = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_display"));

    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();
}

G_MODULE_EXPORT void on_btn_tax2_clicked()
{
    GtkBuilder      *builder; 
    GtkWidget       *window;

    numshow = 1;
    ans = 0;

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "window_tax2.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_tax2"));
    gtk_builder_connect_signals(builder, NULL);
    
    // get pointers to the two labels
    g_lbl_display2 = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_display2"));

    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();
}

G_MODULE_EXPORT void on_btn_one2_clicked()
{
    ans = (numshow * ans)+1;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}
// called when button is clicked
G_MODULE_EXPORT void on_btn_two2_clicked()
{
    ans = (numshow * ans)+2;
    char str_num[100] = {0};
    sprintf(str_num, "%d", ans);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_three2_clicked()
{
    ans = (numshow * ans)+3;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_four2_clicked()
{
    ans = (numshow * ans)+4;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_five2_clicked()
{
    ans = (numshow * ans)+5;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_six2_clicked()
{
    ans = (numshow * ans)+6;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_seven2_clicked()
{
    ans = (numshow * ans)+7;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_eight2_clicked()
{
    ans = (numshow * ans)+8;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_nine2_clicked()
{
    ans = (numshow * ans)+9;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_zero2_clicked()
{
    ans = (numshow * ans)+0;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}


G_MODULE_EXPORT void on_btn_clear2_clicked()
{
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), "0");
    numshow = 1;
    ans = 0;
}

G_MODULE_EXPORT void on_btn_answer2_clicked()
{
    if(ans <= 300000){
        ans = 0;
    }
    else if(ans > 300000 && ans <= 3000000){
        ans = ans*0.15;
    }
    else if(ans > 3000000){
        ans = ans*0.2;
    }
    tans = ans;
    char str_num[100];
    itoa(tans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display2), str_num);
}


G_MODULE_EXPORT void on_btn_tax3_clicked()
{
    GtkBuilder      *builder; 
    GtkWidget       *window;

    numshow = 1;
    ans = 0;

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "window_tax3.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_tax3"));
    gtk_builder_connect_signals(builder, NULL);
    
    // get pointers to the two labels
    g_lbl_display3 = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_display3"));

    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_zero3_clicked()
{
    ans = (numshow * ans)+0;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_one3_clicked()
{
    ans = (numshow * ans)+1;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_two3_clicked()
{
    ans = (numshow * ans)+2;
    char str_num[100] = {0};
    sprintf(str_num, "%d", ans);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_three3_clicked()
{
    ans = (numshow * ans)+3;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_four3_clicked()
{
    ans = (numshow * ans)+4;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_five3_clicked()
{
    ans = (numshow * ans)+5;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_six3_clicked()
{
    ans = (numshow * ans)+6;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_seven3_clicked()
{
    ans = (numshow * ans)+7;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_eight3_clicked()
{
    ans = (numshow * ans)+8;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}

// called when button is clicked
G_MODULE_EXPORT void on_btn_nine3_clicked()
{
    ans = (numshow * ans)+9;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
    if(numshow == 1){
        numshow = numshow * 10;
    }
}


G_MODULE_EXPORT void on_btn_clear3_clicked()
{
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), "0");
    numshow = 1;
    ans = 0;
}

G_MODULE_EXPORT void on_btn_shipping_clicked()
{
    ans = ans*0.01;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
}

G_MODULE_EXPORT void on_btn_ad_clicked()
{
    ans = ans*0.02;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
}

G_MODULE_EXPORT void on_btn_ser_clicked()
{
    ans = ans*0.03;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
}

G_MODULE_EXPORT void on_btn_rental_clicked()
{
    ans = ans*0.05;
    char str_num[100];
    itoa(ans,str_num,10);
    gtk_label_set_text(GTK_LABEL(g_lbl_display3), str_num);
}

// called when window is closed
G_MODULE_EXPORT void on_window_main_destroy()
{
    gtk_main_quit();
}

// called when window is closed
G_MODULE_EXPORT void on_main_display_destroy()
{
    gtk_main_quit();
}

G_MODULE_EXPORT void on_window_tax2_destroy()
{
    gtk_main_quit();
}

G_MODULE_EXPORT void on_window_tax3_destroy()
{
    gtk_main_quit();
}
