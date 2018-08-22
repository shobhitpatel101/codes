Public Class Form2

    Dim cn As New OleDb.OleDbConnection
    Dim rs As New OleDb.OleDbCommand
    Dim aq As Integer = 2
    Dim r As OleDb.OleDbDataReader


    Private Sub Form2_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        cn.ConnectionString = ("provider = Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\POPS\Documents\question.mdb")
        cn.Open()
        rs.Connection = cn
        rs.CommandText = "select * from tablea"
        r = rs.ExecuteReader
        If Not r.Read() Then
            MsgBox("Over !!")
        Else
            Label1.Text = r.Item(1)
            CheckBox1.Text = r.Item(2)
            CheckBox2.Text = r.Item(3)
            CheckBox3.Text = r.Item(4)
            CheckBox4.Text = r.Item(5)
            aq = aq + 1
        End If
    End Sub
    Private Sub Label1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Label1.Click

    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click


        If Not r.Read() Then
            MsgBox("Over !!")
        Else
            Label1.Text = r.Item(1)
            CheckBox1.Text = r.Item(2)
            CheckBox2.Text = r.Item(3)
            CheckBox3.Text = r.Item(4)
            CheckBox4.Text = r.Item(5)
            aq = aq + 1
        End If
        Dim ch As Integer
    End Sub
End Class