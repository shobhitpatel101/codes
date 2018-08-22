
Public Class LoginForm1

    Dim cn As New OleDb.OleDbConnection
    Dim rs As New OleDb.OleDbCommand

    Private Sub OK_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles OK.Click
        cn.ConnectionString = ("provider = Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\POPS\Documents\database.mdb")
        cn.Open()
        rs.Connection = cn
        rs.CommandText = "Select * from Table1 where user='" & UsernameTextBox.Text & "'"

        Dim r As OleDb.OleDbDataReader = rs.ExecuteReader
        If Not r.Read() Then
            MsgBox("User Name Not Found")
        ElseIf (PasswordTextBox.Text = r.Item(0)) Then
            Form2.Show()
            Me.Hide()
        Else
            MsgBox("Please enter correct password")

        End If
        cn.Close()
    End Sub

    Private Sub Cancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Cancel.Click
        Me.Close()
    End Sub



End Class
