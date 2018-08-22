Public Class Form1

    Private Sub Label1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Label1.Click

    End Sub

    Private Sub ProgressBar1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ProgressBar1.Click

    End Sub
    Dim p = 0
    Dim cn As New OleDb.OleDbConnection
    Dim rs As New OleDb.OleDbCommand
     
    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick


        If ProgressBar1.Value = 100 Then
            Timer1.Enabled = False
            LoginForm1.Show()
            Me.Hide()
        Else
            ProgressBar1.Value = ProgressBar1.Value + 10
            PictureBox1.Image = (ImageList1.Images(p))
            p = p + 1
            If p > 7 Then
                p = 0
            End If
        End If


    End Sub

    Private Sub Label2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Label2.Click

    End Sub
End Class
