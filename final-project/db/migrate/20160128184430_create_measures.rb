class CreateMeasures < ActiveRecord::Migration
  def change
    create_table :measures do |t|
      t.references :attribute, index: true, foreign_key: true
      t.string :value

      t.timestamps null: false
    end
  end
end